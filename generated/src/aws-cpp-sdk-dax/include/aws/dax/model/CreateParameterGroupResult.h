/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dax/DAX_EXPORTS.h>
#include <aws/dax/model/ParameterGroup.h>
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
namespace DAX
{
namespace Model
{
  class CreateParameterGroupResult
  {
  public:
    AWS_DAX_API CreateParameterGroupResult();
    AWS_DAX_API CreateParameterGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DAX_API CreateParameterGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Represents the output of a <i>CreateParameterGroup</i> action.</p>
     */
    inline const ParameterGroup& GetParameterGroup() const{ return m_parameterGroup; }

    /**
     * <p>Represents the output of a <i>CreateParameterGroup</i> action.</p>
     */
    inline void SetParameterGroup(const ParameterGroup& value) { m_parameterGroup = value; }

    /**
     * <p>Represents the output of a <i>CreateParameterGroup</i> action.</p>
     */
    inline void SetParameterGroup(ParameterGroup&& value) { m_parameterGroup = std::move(value); }

    /**
     * <p>Represents the output of a <i>CreateParameterGroup</i> action.</p>
     */
    inline CreateParameterGroupResult& WithParameterGroup(const ParameterGroup& value) { SetParameterGroup(value); return *this;}

    /**
     * <p>Represents the output of a <i>CreateParameterGroup</i> action.</p>
     */
    inline CreateParameterGroupResult& WithParameterGroup(ParameterGroup&& value) { SetParameterGroup(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateParameterGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateParameterGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateParameterGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ParameterGroup m_parameterGroup;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DAX
} // namespace Aws
