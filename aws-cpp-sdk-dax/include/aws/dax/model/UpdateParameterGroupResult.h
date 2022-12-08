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
  class UpdateParameterGroupResult
  {
  public:
    AWS_DAX_API UpdateParameterGroupResult();
    AWS_DAX_API UpdateParameterGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DAX_API UpdateParameterGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The parameter group that has been modified.</p>
     */
    inline const ParameterGroup& GetParameterGroup() const{ return m_parameterGroup; }

    /**
     * <p>The parameter group that has been modified.</p>
     */
    inline void SetParameterGroup(const ParameterGroup& value) { m_parameterGroup = value; }

    /**
     * <p>The parameter group that has been modified.</p>
     */
    inline void SetParameterGroup(ParameterGroup&& value) { m_parameterGroup = std::move(value); }

    /**
     * <p>The parameter group that has been modified.</p>
     */
    inline UpdateParameterGroupResult& WithParameterGroup(const ParameterGroup& value) { SetParameterGroup(value); return *this;}

    /**
     * <p>The parameter group that has been modified.</p>
     */
    inline UpdateParameterGroupResult& WithParameterGroup(ParameterGroup&& value) { SetParameterGroup(std::move(value)); return *this;}

  private:

    ParameterGroup m_parameterGroup;
  };

} // namespace Model
} // namespace DAX
} // namespace Aws
