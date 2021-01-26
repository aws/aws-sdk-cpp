/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-paramstore-labels.html">Labeling
     * parameters</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInvalidLabels() const{ return m_invalidLabels; }

    /**
     * <p>The label does not meet the requirements. For information about parameter
     * label requirements, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-paramstore-labels.html">Labeling
     * parameters</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline void SetInvalidLabels(const Aws::Vector<Aws::String>& value) { m_invalidLabels = value; }

    /**
     * <p>The label does not meet the requirements. For information about parameter
     * label requirements, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-paramstore-labels.html">Labeling
     * parameters</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline void SetInvalidLabels(Aws::Vector<Aws::String>&& value) { m_invalidLabels = std::move(value); }

    /**
     * <p>The label does not meet the requirements. For information about parameter
     * label requirements, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-paramstore-labels.html">Labeling
     * parameters</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline LabelParameterVersionResult& WithInvalidLabels(const Aws::Vector<Aws::String>& value) { SetInvalidLabels(value); return *this;}

    /**
     * <p>The label does not meet the requirements. For information about parameter
     * label requirements, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-paramstore-labels.html">Labeling
     * parameters</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline LabelParameterVersionResult& WithInvalidLabels(Aws::Vector<Aws::String>&& value) { SetInvalidLabels(std::move(value)); return *this;}

    /**
     * <p>The label does not meet the requirements. For information about parameter
     * label requirements, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-paramstore-labels.html">Labeling
     * parameters</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline LabelParameterVersionResult& AddInvalidLabels(const Aws::String& value) { m_invalidLabels.push_back(value); return *this; }

    /**
     * <p>The label does not meet the requirements. For information about parameter
     * label requirements, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-paramstore-labels.html">Labeling
     * parameters</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline LabelParameterVersionResult& AddInvalidLabels(Aws::String&& value) { m_invalidLabels.push_back(std::move(value)); return *this; }

    /**
     * <p>The label does not meet the requirements. For information about parameter
     * label requirements, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-paramstore-labels.html">Labeling
     * parameters</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline LabelParameterVersionResult& AddInvalidLabels(const char* value) { m_invalidLabels.push_back(value); return *this; }


    /**
     * <p>The version of the parameter that has been labeled.</p>
     */
    inline long long GetParameterVersion() const{ return m_parameterVersion; }

    /**
     * <p>The version of the parameter that has been labeled.</p>
     */
    inline void SetParameterVersion(long long value) { m_parameterVersion = value; }

    /**
     * <p>The version of the parameter that has been labeled.</p>
     */
    inline LabelParameterVersionResult& WithParameterVersion(long long value) { SetParameterVersion(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_invalidLabels;

    long long m_parameterVersion;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
