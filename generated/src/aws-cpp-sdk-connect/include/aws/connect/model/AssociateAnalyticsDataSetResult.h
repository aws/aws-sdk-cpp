/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Connect
{
namespace Model
{
  class AssociateAnalyticsDataSetResult
  {
  public:
    AWS_CONNECT_API AssociateAnalyticsDataSetResult();
    AWS_CONNECT_API AssociateAnalyticsDataSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API AssociateAnalyticsDataSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of the dataset that was associated.</p>
     */
    inline const Aws::String& GetDataSetId() const{ return m_dataSetId; }

    /**
     * <p>The identifier of the dataset that was associated.</p>
     */
    inline void SetDataSetId(const Aws::String& value) { m_dataSetId = value; }

    /**
     * <p>The identifier of the dataset that was associated.</p>
     */
    inline void SetDataSetId(Aws::String&& value) { m_dataSetId = std::move(value); }

    /**
     * <p>The identifier of the dataset that was associated.</p>
     */
    inline void SetDataSetId(const char* value) { m_dataSetId.assign(value); }

    /**
     * <p>The identifier of the dataset that was associated.</p>
     */
    inline AssociateAnalyticsDataSetResult& WithDataSetId(const Aws::String& value) { SetDataSetId(value); return *this;}

    /**
     * <p>The identifier of the dataset that was associated.</p>
     */
    inline AssociateAnalyticsDataSetResult& WithDataSetId(Aws::String&& value) { SetDataSetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the dataset that was associated.</p>
     */
    inline AssociateAnalyticsDataSetResult& WithDataSetId(const char* value) { SetDataSetId(value); return *this;}


    /**
     * <p>The identifier of the target account. </p>
     */
    inline const Aws::String& GetTargetAccountId() const{ return m_targetAccountId; }

    /**
     * <p>The identifier of the target account. </p>
     */
    inline void SetTargetAccountId(const Aws::String& value) { m_targetAccountId = value; }

    /**
     * <p>The identifier of the target account. </p>
     */
    inline void SetTargetAccountId(Aws::String&& value) { m_targetAccountId = std::move(value); }

    /**
     * <p>The identifier of the target account. </p>
     */
    inline void SetTargetAccountId(const char* value) { m_targetAccountId.assign(value); }

    /**
     * <p>The identifier of the target account. </p>
     */
    inline AssociateAnalyticsDataSetResult& WithTargetAccountId(const Aws::String& value) { SetTargetAccountId(value); return *this;}

    /**
     * <p>The identifier of the target account. </p>
     */
    inline AssociateAnalyticsDataSetResult& WithTargetAccountId(Aws::String&& value) { SetTargetAccountId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the target account. </p>
     */
    inline AssociateAnalyticsDataSetResult& WithTargetAccountId(const char* value) { SetTargetAccountId(value); return *this;}


    /**
     * <p>The Resource Access Manager share ID that is generated.</p>
     */
    inline const Aws::String& GetResourceShareId() const{ return m_resourceShareId; }

    /**
     * <p>The Resource Access Manager share ID that is generated.</p>
     */
    inline void SetResourceShareId(const Aws::String& value) { m_resourceShareId = value; }

    /**
     * <p>The Resource Access Manager share ID that is generated.</p>
     */
    inline void SetResourceShareId(Aws::String&& value) { m_resourceShareId = std::move(value); }

    /**
     * <p>The Resource Access Manager share ID that is generated.</p>
     */
    inline void SetResourceShareId(const char* value) { m_resourceShareId.assign(value); }

    /**
     * <p>The Resource Access Manager share ID that is generated.</p>
     */
    inline AssociateAnalyticsDataSetResult& WithResourceShareId(const Aws::String& value) { SetResourceShareId(value); return *this;}

    /**
     * <p>The Resource Access Manager share ID that is generated.</p>
     */
    inline AssociateAnalyticsDataSetResult& WithResourceShareId(Aws::String&& value) { SetResourceShareId(std::move(value)); return *this;}

    /**
     * <p>The Resource Access Manager share ID that is generated.</p>
     */
    inline AssociateAnalyticsDataSetResult& WithResourceShareId(const char* value) { SetResourceShareId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Resource Access Manager share. </p>
     */
    inline const Aws::String& GetResourceShareArn() const{ return m_resourceShareArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Resource Access Manager share. </p>
     */
    inline void SetResourceShareArn(const Aws::String& value) { m_resourceShareArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Resource Access Manager share. </p>
     */
    inline void SetResourceShareArn(Aws::String&& value) { m_resourceShareArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Resource Access Manager share. </p>
     */
    inline void SetResourceShareArn(const char* value) { m_resourceShareArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Resource Access Manager share. </p>
     */
    inline AssociateAnalyticsDataSetResult& WithResourceShareArn(const Aws::String& value) { SetResourceShareArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Resource Access Manager share. </p>
     */
    inline AssociateAnalyticsDataSetResult& WithResourceShareArn(Aws::String&& value) { SetResourceShareArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Resource Access Manager share. </p>
     */
    inline AssociateAnalyticsDataSetResult& WithResourceShareArn(const char* value) { SetResourceShareArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline AssociateAnalyticsDataSetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline AssociateAnalyticsDataSetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline AssociateAnalyticsDataSetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_dataSetId;

    Aws::String m_targetAccountId;

    Aws::String m_resourceShareId;

    Aws::String m_resourceShareArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
