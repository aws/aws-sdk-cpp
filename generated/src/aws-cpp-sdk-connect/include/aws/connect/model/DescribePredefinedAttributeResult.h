/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/PredefinedAttribute.h>
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
  class DescribePredefinedAttributeResult
  {
  public:
    AWS_CONNECT_API DescribePredefinedAttributeResult();
    AWS_CONNECT_API DescribePredefinedAttributeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API DescribePredefinedAttributeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the predefined attribute.</p>
     */
    inline const PredefinedAttribute& GetPredefinedAttribute() const{ return m_predefinedAttribute; }

    /**
     * <p>Information about the predefined attribute.</p>
     */
    inline void SetPredefinedAttribute(const PredefinedAttribute& value) { m_predefinedAttribute = value; }

    /**
     * <p>Information about the predefined attribute.</p>
     */
    inline void SetPredefinedAttribute(PredefinedAttribute&& value) { m_predefinedAttribute = std::move(value); }

    /**
     * <p>Information about the predefined attribute.</p>
     */
    inline DescribePredefinedAttributeResult& WithPredefinedAttribute(const PredefinedAttribute& value) { SetPredefinedAttribute(value); return *this;}

    /**
     * <p>Information about the predefined attribute.</p>
     */
    inline DescribePredefinedAttributeResult& WithPredefinedAttribute(PredefinedAttribute&& value) { SetPredefinedAttribute(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribePredefinedAttributeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribePredefinedAttributeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribePredefinedAttributeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    PredefinedAttribute m_predefinedAttribute;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
