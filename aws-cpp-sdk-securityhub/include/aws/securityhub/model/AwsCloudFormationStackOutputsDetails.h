/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Provides information about the CloudFormation stack output. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsCloudFormationStackOutputsDetails">AWS
   * API Reference</a></p>
   */
  class AwsCloudFormationStackOutputsDetails
  {
  public:
    AWS_SECURITYHUB_API AwsCloudFormationStackOutputsDetails();
    AWS_SECURITYHUB_API AwsCloudFormationStackOutputsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsCloudFormationStackOutputsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A user-defined description associated with the output. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A user-defined description associated with the output. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A user-defined description associated with the output. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A user-defined description associated with the output. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A user-defined description associated with the output. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A user-defined description associated with the output. </p>
     */
    inline AwsCloudFormationStackOutputsDetails& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A user-defined description associated with the output. </p>
     */
    inline AwsCloudFormationStackOutputsDetails& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A user-defined description associated with the output. </p>
     */
    inline AwsCloudFormationStackOutputsDetails& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The key associated with the output. </p>
     */
    inline const Aws::String& GetOutputKey() const{ return m_outputKey; }

    /**
     * <p>The key associated with the output. </p>
     */
    inline bool OutputKeyHasBeenSet() const { return m_outputKeyHasBeenSet; }

    /**
     * <p>The key associated with the output. </p>
     */
    inline void SetOutputKey(const Aws::String& value) { m_outputKeyHasBeenSet = true; m_outputKey = value; }

    /**
     * <p>The key associated with the output. </p>
     */
    inline void SetOutputKey(Aws::String&& value) { m_outputKeyHasBeenSet = true; m_outputKey = std::move(value); }

    /**
     * <p>The key associated with the output. </p>
     */
    inline void SetOutputKey(const char* value) { m_outputKeyHasBeenSet = true; m_outputKey.assign(value); }

    /**
     * <p>The key associated with the output. </p>
     */
    inline AwsCloudFormationStackOutputsDetails& WithOutputKey(const Aws::String& value) { SetOutputKey(value); return *this;}

    /**
     * <p>The key associated with the output. </p>
     */
    inline AwsCloudFormationStackOutputsDetails& WithOutputKey(Aws::String&& value) { SetOutputKey(std::move(value)); return *this;}

    /**
     * <p>The key associated with the output. </p>
     */
    inline AwsCloudFormationStackOutputsDetails& WithOutputKey(const char* value) { SetOutputKey(value); return *this;}


    /**
     * <p>The value associated with the output. </p>
     */
    inline const Aws::String& GetOutputValue() const{ return m_outputValue; }

    /**
     * <p>The value associated with the output. </p>
     */
    inline bool OutputValueHasBeenSet() const { return m_outputValueHasBeenSet; }

    /**
     * <p>The value associated with the output. </p>
     */
    inline void SetOutputValue(const Aws::String& value) { m_outputValueHasBeenSet = true; m_outputValue = value; }

    /**
     * <p>The value associated with the output. </p>
     */
    inline void SetOutputValue(Aws::String&& value) { m_outputValueHasBeenSet = true; m_outputValue = std::move(value); }

    /**
     * <p>The value associated with the output. </p>
     */
    inline void SetOutputValue(const char* value) { m_outputValueHasBeenSet = true; m_outputValue.assign(value); }

    /**
     * <p>The value associated with the output. </p>
     */
    inline AwsCloudFormationStackOutputsDetails& WithOutputValue(const Aws::String& value) { SetOutputValue(value); return *this;}

    /**
     * <p>The value associated with the output. </p>
     */
    inline AwsCloudFormationStackOutputsDetails& WithOutputValue(Aws::String&& value) { SetOutputValue(std::move(value)); return *this;}

    /**
     * <p>The value associated with the output. </p>
     */
    inline AwsCloudFormationStackOutputsDetails& WithOutputValue(const char* value) { SetOutputValue(value); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_outputKey;
    bool m_outputKeyHasBeenSet = false;

    Aws::String m_outputValue;
    bool m_outputValueHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
