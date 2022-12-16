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
   * <p> Information on the instance metadata service (IMDS) configuration of the
   * notebook instance. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsSageMakerNotebookInstanceMetadataServiceConfigurationDetails">AWS
   * API Reference</a></p>
   */
  class AwsSageMakerNotebookInstanceMetadataServiceConfigurationDetails
  {
  public:
    AWS_SECURITYHUB_API AwsSageMakerNotebookInstanceMetadataServiceConfigurationDetails();
    AWS_SECURITYHUB_API AwsSageMakerNotebookInstanceMetadataServiceConfigurationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsSageMakerNotebookInstanceMetadataServiceConfigurationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Indicates the minimum IMDS version that the notebook instance supports. </p>
     */
    inline const Aws::String& GetMinimumInstanceMetadataServiceVersion() const{ return m_minimumInstanceMetadataServiceVersion; }

    /**
     * <p> Indicates the minimum IMDS version that the notebook instance supports. </p>
     */
    inline bool MinimumInstanceMetadataServiceVersionHasBeenSet() const { return m_minimumInstanceMetadataServiceVersionHasBeenSet; }

    /**
     * <p> Indicates the minimum IMDS version that the notebook instance supports. </p>
     */
    inline void SetMinimumInstanceMetadataServiceVersion(const Aws::String& value) { m_minimumInstanceMetadataServiceVersionHasBeenSet = true; m_minimumInstanceMetadataServiceVersion = value; }

    /**
     * <p> Indicates the minimum IMDS version that the notebook instance supports. </p>
     */
    inline void SetMinimumInstanceMetadataServiceVersion(Aws::String&& value) { m_minimumInstanceMetadataServiceVersionHasBeenSet = true; m_minimumInstanceMetadataServiceVersion = std::move(value); }

    /**
     * <p> Indicates the minimum IMDS version that the notebook instance supports. </p>
     */
    inline void SetMinimumInstanceMetadataServiceVersion(const char* value) { m_minimumInstanceMetadataServiceVersionHasBeenSet = true; m_minimumInstanceMetadataServiceVersion.assign(value); }

    /**
     * <p> Indicates the minimum IMDS version that the notebook instance supports. </p>
     */
    inline AwsSageMakerNotebookInstanceMetadataServiceConfigurationDetails& WithMinimumInstanceMetadataServiceVersion(const Aws::String& value) { SetMinimumInstanceMetadataServiceVersion(value); return *this;}

    /**
     * <p> Indicates the minimum IMDS version that the notebook instance supports. </p>
     */
    inline AwsSageMakerNotebookInstanceMetadataServiceConfigurationDetails& WithMinimumInstanceMetadataServiceVersion(Aws::String&& value) { SetMinimumInstanceMetadataServiceVersion(std::move(value)); return *this;}

    /**
     * <p> Indicates the minimum IMDS version that the notebook instance supports. </p>
     */
    inline AwsSageMakerNotebookInstanceMetadataServiceConfigurationDetails& WithMinimumInstanceMetadataServiceVersion(const char* value) { SetMinimumInstanceMetadataServiceVersion(value); return *this;}

  private:

    Aws::String m_minimumInstanceMetadataServiceVersion;
    bool m_minimumInstanceMetadataServiceVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
