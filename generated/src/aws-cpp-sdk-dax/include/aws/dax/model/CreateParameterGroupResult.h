/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dax/DAX_EXPORTS.h>
#include <aws/dax/model/ParameterGroup.h>
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

  private:

    ParameterGroup m_parameterGroup;
  };

} // namespace Model
} // namespace DAX
} // namespace Aws
