/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace EMR
{
namespace Model
{

  /**
   * <p>Properties that describe the Amazon Web Services principal that created the
   * <code>BlockPublicAccessConfiguration</code> using the
   * <code>PutBlockPublicAccessConfiguration</code> action as well as the date and
   * time that the configuration was created. Each time a configuration for block
   * public access is updated, Amazon EMR updates this metadata.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/BlockPublicAccessConfigurationMetadata">AWS
   * API Reference</a></p>
   */
  class BlockPublicAccessConfigurationMetadata
  {
  public:
    AWS_EMR_API BlockPublicAccessConfigurationMetadata() = default;
    AWS_EMR_API BlockPublicAccessConfigurationMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API BlockPublicAccessConfigurationMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The date and time that the configuration was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const { return m_creationDateTime; }
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    void SetCreationDateTime(CreationDateTimeT&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::forward<CreationDateTimeT>(value); }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    BlockPublicAccessConfigurationMetadata& WithCreationDateTime(CreationDateTimeT&& value) { SetCreationDateTime(std::forward<CreationDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name that created or last modified the configuration.</p>
     */
    inline const Aws::String& GetCreatedByArn() const { return m_createdByArn; }
    inline bool CreatedByArnHasBeenSet() const { return m_createdByArnHasBeenSet; }
    template<typename CreatedByArnT = Aws::String>
    void SetCreatedByArn(CreatedByArnT&& value) { m_createdByArnHasBeenSet = true; m_createdByArn = std::forward<CreatedByArnT>(value); }
    template<typename CreatedByArnT = Aws::String>
    BlockPublicAccessConfigurationMetadata& WithCreatedByArn(CreatedByArnT&& value) { SetCreatedByArn(std::forward<CreatedByArnT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_creationDateTime{};
    bool m_creationDateTimeHasBeenSet = false;

    Aws::String m_createdByArn;
    bool m_createdByArnHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
