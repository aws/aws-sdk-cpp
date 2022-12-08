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
   * <p>A data volume to mount from another container.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEcsTaskDefinitionContainerDefinitionsVolumesFromDetails">AWS
   * API Reference</a></p>
   */
  class AwsEcsTaskDefinitionContainerDefinitionsVolumesFromDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionContainerDefinitionsVolumesFromDetails();
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionContainerDefinitionsVolumesFromDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionContainerDefinitionsVolumesFromDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Whether the container has read-only access to the volume.</p>
     */
    inline bool GetReadOnly() const{ return m_readOnly; }

    /**
     * <p>Whether the container has read-only access to the volume.</p>
     */
    inline bool ReadOnlyHasBeenSet() const { return m_readOnlyHasBeenSet; }

    /**
     * <p>Whether the container has read-only access to the volume.</p>
     */
    inline void SetReadOnly(bool value) { m_readOnlyHasBeenSet = true; m_readOnly = value; }

    /**
     * <p>Whether the container has read-only access to the volume.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsVolumesFromDetails& WithReadOnly(bool value) { SetReadOnly(value); return *this;}


    /**
     * <p>The name of another container within the same task definition from which to
     * mount volumes.</p>
     */
    inline const Aws::String& GetSourceContainer() const{ return m_sourceContainer; }

    /**
     * <p>The name of another container within the same task definition from which to
     * mount volumes.</p>
     */
    inline bool SourceContainerHasBeenSet() const { return m_sourceContainerHasBeenSet; }

    /**
     * <p>The name of another container within the same task definition from which to
     * mount volumes.</p>
     */
    inline void SetSourceContainer(const Aws::String& value) { m_sourceContainerHasBeenSet = true; m_sourceContainer = value; }

    /**
     * <p>The name of another container within the same task definition from which to
     * mount volumes.</p>
     */
    inline void SetSourceContainer(Aws::String&& value) { m_sourceContainerHasBeenSet = true; m_sourceContainer = std::move(value); }

    /**
     * <p>The name of another container within the same task definition from which to
     * mount volumes.</p>
     */
    inline void SetSourceContainer(const char* value) { m_sourceContainerHasBeenSet = true; m_sourceContainer.assign(value); }

    /**
     * <p>The name of another container within the same task definition from which to
     * mount volumes.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsVolumesFromDetails& WithSourceContainer(const Aws::String& value) { SetSourceContainer(value); return *this;}

    /**
     * <p>The name of another container within the same task definition from which to
     * mount volumes.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsVolumesFromDetails& WithSourceContainer(Aws::String&& value) { SetSourceContainer(std::move(value)); return *this;}

    /**
     * <p>The name of another container within the same task definition from which to
     * mount volumes.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsVolumesFromDetails& WithSourceContainer(const char* value) { SetSourceContainer(value); return *this;}

  private:

    bool m_readOnly;
    bool m_readOnlyHasBeenSet = false;

    Aws::String m_sourceContainer;
    bool m_sourceContainerHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
