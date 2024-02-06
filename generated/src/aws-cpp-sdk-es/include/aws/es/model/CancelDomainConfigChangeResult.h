/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/es/model/CancelledChangeProperty.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ElasticsearchService
{
namespace Model
{
  /**
   * <p>Contains the details of the cancelled domain config change.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/CancelDomainConfigChangeResponse">AWS
   * API Reference</a></p>
   */
  class CancelDomainConfigChangeResult
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API CancelDomainConfigChangeResult();
    AWS_ELASTICSEARCHSERVICE_API CancelDomainConfigChangeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICSEARCHSERVICE_API CancelDomainConfigChangeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Whether or not the request was a dry run. If <b>True</b>, the changes were
     * not actually cancelled.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Whether or not the request was a dry run. If <b>True</b>, the changes were
     * not actually cancelled.</p>
     */
    inline void SetDryRun(bool value) { m_dryRun = value; }

    /**
     * <p>Whether or not the request was a dry run. If <b>True</b>, the changes were
     * not actually cancelled.</p>
     */
    inline CancelDomainConfigChangeResult& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The unique identifiers of the changes that were cancelled.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCancelledChangeIds() const{ return m_cancelledChangeIds; }

    /**
     * <p>The unique identifiers of the changes that were cancelled.</p>
     */
    inline void SetCancelledChangeIds(const Aws::Vector<Aws::String>& value) { m_cancelledChangeIds = value; }

    /**
     * <p>The unique identifiers of the changes that were cancelled.</p>
     */
    inline void SetCancelledChangeIds(Aws::Vector<Aws::String>&& value) { m_cancelledChangeIds = std::move(value); }

    /**
     * <p>The unique identifiers of the changes that were cancelled.</p>
     */
    inline CancelDomainConfigChangeResult& WithCancelledChangeIds(const Aws::Vector<Aws::String>& value) { SetCancelledChangeIds(value); return *this;}

    /**
     * <p>The unique identifiers of the changes that were cancelled.</p>
     */
    inline CancelDomainConfigChangeResult& WithCancelledChangeIds(Aws::Vector<Aws::String>&& value) { SetCancelledChangeIds(std::move(value)); return *this;}

    /**
     * <p>The unique identifiers of the changes that were cancelled.</p>
     */
    inline CancelDomainConfigChangeResult& AddCancelledChangeIds(const Aws::String& value) { m_cancelledChangeIds.push_back(value); return *this; }

    /**
     * <p>The unique identifiers of the changes that were cancelled.</p>
     */
    inline CancelDomainConfigChangeResult& AddCancelledChangeIds(Aws::String&& value) { m_cancelledChangeIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The unique identifiers of the changes that were cancelled.</p>
     */
    inline CancelDomainConfigChangeResult& AddCancelledChangeIds(const char* value) { m_cancelledChangeIds.push_back(value); return *this; }


    /**
     * <p>The domain change properties that were cancelled.</p>
     */
    inline const Aws::Vector<CancelledChangeProperty>& GetCancelledChangeProperties() const{ return m_cancelledChangeProperties; }

    /**
     * <p>The domain change properties that were cancelled.</p>
     */
    inline void SetCancelledChangeProperties(const Aws::Vector<CancelledChangeProperty>& value) { m_cancelledChangeProperties = value; }

    /**
     * <p>The domain change properties that were cancelled.</p>
     */
    inline void SetCancelledChangeProperties(Aws::Vector<CancelledChangeProperty>&& value) { m_cancelledChangeProperties = std::move(value); }

    /**
     * <p>The domain change properties that were cancelled.</p>
     */
    inline CancelDomainConfigChangeResult& WithCancelledChangeProperties(const Aws::Vector<CancelledChangeProperty>& value) { SetCancelledChangeProperties(value); return *this;}

    /**
     * <p>The domain change properties that were cancelled.</p>
     */
    inline CancelDomainConfigChangeResult& WithCancelledChangeProperties(Aws::Vector<CancelledChangeProperty>&& value) { SetCancelledChangeProperties(std::move(value)); return *this;}

    /**
     * <p>The domain change properties that were cancelled.</p>
     */
    inline CancelDomainConfigChangeResult& AddCancelledChangeProperties(const CancelledChangeProperty& value) { m_cancelledChangeProperties.push_back(value); return *this; }

    /**
     * <p>The domain change properties that were cancelled.</p>
     */
    inline CancelDomainConfigChangeResult& AddCancelledChangeProperties(CancelledChangeProperty&& value) { m_cancelledChangeProperties.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CancelDomainConfigChangeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CancelDomainConfigChangeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CancelDomainConfigChangeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    bool m_dryRun;

    Aws::Vector<Aws::String> m_cancelledChangeIds;

    Aws::Vector<CancelledChangeProperty> m_cancelledChangeProperties;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
