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
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class AWS_SSM_API LabelParameterVersionRequest : public SSMRequest
  {
  public:
    LabelParameterVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "LabelParameterVersion"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The parameter name on which you want to attach one or more labels.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The parameter name on which you want to attach one or more labels.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The parameter name on which you want to attach one or more labels.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The parameter name on which you want to attach one or more labels.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The parameter name on which you want to attach one or more labels.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The parameter name on which you want to attach one or more labels.</p>
     */
    inline LabelParameterVersionRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The parameter name on which you want to attach one or more labels.</p>
     */
    inline LabelParameterVersionRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The parameter name on which you want to attach one or more labels.</p>
     */
    inline LabelParameterVersionRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The specific version of the parameter on which you want to attach one or more
     * labels. If no version is specified, the system attaches the label to the latest
     * version.)</p>
     */
    inline long long GetParameterVersion() const{ return m_parameterVersion; }

    /**
     * <p>The specific version of the parameter on which you want to attach one or more
     * labels. If no version is specified, the system attaches the label to the latest
     * version.)</p>
     */
    inline bool ParameterVersionHasBeenSet() const { return m_parameterVersionHasBeenSet; }

    /**
     * <p>The specific version of the parameter on which you want to attach one or more
     * labels. If no version is specified, the system attaches the label to the latest
     * version.)</p>
     */
    inline void SetParameterVersion(long long value) { m_parameterVersionHasBeenSet = true; m_parameterVersion = value; }

    /**
     * <p>The specific version of the parameter on which you want to attach one or more
     * labels. If no version is specified, the system attaches the label to the latest
     * version.)</p>
     */
    inline LabelParameterVersionRequest& WithParameterVersion(long long value) { SetParameterVersion(value); return *this;}


    /**
     * <p>One or more labels to attach to the specified parameter version.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLabels() const{ return m_labels; }

    /**
     * <p>One or more labels to attach to the specified parameter version.</p>
     */
    inline bool LabelsHasBeenSet() const { return m_labelsHasBeenSet; }

    /**
     * <p>One or more labels to attach to the specified parameter version.</p>
     */
    inline void SetLabels(const Aws::Vector<Aws::String>& value) { m_labelsHasBeenSet = true; m_labels = value; }

    /**
     * <p>One or more labels to attach to the specified parameter version.</p>
     */
    inline void SetLabels(Aws::Vector<Aws::String>&& value) { m_labelsHasBeenSet = true; m_labels = std::move(value); }

    /**
     * <p>One or more labels to attach to the specified parameter version.</p>
     */
    inline LabelParameterVersionRequest& WithLabels(const Aws::Vector<Aws::String>& value) { SetLabels(value); return *this;}

    /**
     * <p>One or more labels to attach to the specified parameter version.</p>
     */
    inline LabelParameterVersionRequest& WithLabels(Aws::Vector<Aws::String>&& value) { SetLabels(std::move(value)); return *this;}

    /**
     * <p>One or more labels to attach to the specified parameter version.</p>
     */
    inline LabelParameterVersionRequest& AddLabels(const Aws::String& value) { m_labelsHasBeenSet = true; m_labels.push_back(value); return *this; }

    /**
     * <p>One or more labels to attach to the specified parameter version.</p>
     */
    inline LabelParameterVersionRequest& AddLabels(Aws::String&& value) { m_labelsHasBeenSet = true; m_labels.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more labels to attach to the specified parameter version.</p>
     */
    inline LabelParameterVersionRequest& AddLabels(const char* value) { m_labelsHasBeenSet = true; m_labels.push_back(value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    long long m_parameterVersion;
    bool m_parameterVersionHasBeenSet;

    Aws::Vector<Aws::String> m_labels;
    bool m_labelsHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
