/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace SSM
{
namespace Model
{
  class AWS_SSM_API LabelParameterVersionResult
  {
  public:
    LabelParameterVersionResult();
    LabelParameterVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    LabelParameterVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The label does not meet the requirements. For information about parameter
     * label requirements, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-paramstore-labels.html">Labeling
     * Parameters</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInvalidLabels() const{ return m_invalidLabels; }

    /**
     * <p>The label does not meet the requirements. For information about parameter
     * label requirements, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-paramstore-labels.html">Labeling
     * Parameters</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline void SetInvalidLabels(const Aws::Vector<Aws::String>& value) { m_invalidLabels = value; }

    /**
     * <p>The label does not meet the requirements. For information about parameter
     * label requirements, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-paramstore-labels.html">Labeling
     * Parameters</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline void SetInvalidLabels(Aws::Vector<Aws::String>&& value) { m_invalidLabels = std::move(value); }

    /**
     * <p>The label does not meet the requirements. For information about parameter
     * label requirements, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-paramstore-labels.html">Labeling
     * Parameters</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline LabelParameterVersionResult& WithInvalidLabels(const Aws::Vector<Aws::String>& value) { SetInvalidLabels(value); return *this;}

    /**
     * <p>The label does not meet the requirements. For information about parameter
     * label requirements, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-paramstore-labels.html">Labeling
     * Parameters</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline LabelParameterVersionResult& WithInvalidLabels(Aws::Vector<Aws::String>&& value) { SetInvalidLabels(std::move(value)); return *this;}

    /**
     * <p>The label does not meet the requirements. For information about parameter
     * label requirements, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-paramstore-labels.html">Labeling
     * Parameters</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline LabelParameterVersionResult& AddInvalidLabels(const Aws::String& value) { m_invalidLabels.push_back(value); return *this; }

    /**
     * <p>The label does not meet the requirements. For information about parameter
     * label requirements, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-paramstore-labels.html">Labeling
     * Parameters</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline LabelParameterVersionResult& AddInvalidLabels(Aws::String&& value) { m_invalidLabels.push_back(std::move(value)); return *this; }

    /**
     * <p>The label does not meet the requirements. For information about parameter
     * label requirements, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-paramstore-labels.html">Labeling
     * Parameters</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline LabelParameterVersionResult& AddInvalidLabels(const char* value) { m_invalidLabels.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_invalidLabels;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
