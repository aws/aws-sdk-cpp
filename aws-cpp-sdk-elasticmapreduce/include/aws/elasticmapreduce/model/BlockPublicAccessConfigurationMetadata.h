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
   * <p>Properties that describe the AWS principal that created the
   * <code>BlockPublicAccessConfiguration</code> using the
   * <code>PutBlockPublicAccessConfiguration</code> action as well as the date and
   * time that the configuration was created. Each time a configuration for block
   * public access is updated, Amazon EMR updates this metadata.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/BlockPublicAccessConfigurationMetadata">AWS
   * API Reference</a></p>
   */
  class AWS_EMR_API BlockPublicAccessConfigurationMetadata
  {
  public:
    BlockPublicAccessConfigurationMetadata();
    BlockPublicAccessConfigurationMetadata(Aws::Utils::Json::JsonView jsonValue);
    BlockPublicAccessConfigurationMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The date and time that the configuration was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>The date and time that the configuration was created.</p>
     */
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }

    /**
     * <p>The date and time that the configuration was created.</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }

    /**
     * <p>The date and time that the configuration was created.</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::move(value); }

    /**
     * <p>The date and time that the configuration was created.</p>
     */
    inline BlockPublicAccessConfigurationMetadata& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>The date and time that the configuration was created.</p>
     */
    inline BlockPublicAccessConfigurationMetadata& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name that created or last modified the configuration.</p>
     */
    inline const Aws::String& GetCreatedByArn() const{ return m_createdByArn; }

    /**
     * <p>The Amazon Resource Name that created or last modified the configuration.</p>
     */
    inline bool CreatedByArnHasBeenSet() const { return m_createdByArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name that created or last modified the configuration.</p>
     */
    inline void SetCreatedByArn(const Aws::String& value) { m_createdByArnHasBeenSet = true; m_createdByArn = value; }

    /**
     * <p>The Amazon Resource Name that created or last modified the configuration.</p>
     */
    inline void SetCreatedByArn(Aws::String&& value) { m_createdByArnHasBeenSet = true; m_createdByArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name that created or last modified the configuration.</p>
     */
    inline void SetCreatedByArn(const char* value) { m_createdByArnHasBeenSet = true; m_createdByArn.assign(value); }

    /**
     * <p>The Amazon Resource Name that created or last modified the configuration.</p>
     */
    inline BlockPublicAccessConfigurationMetadata& WithCreatedByArn(const Aws::String& value) { SetCreatedByArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name that created or last modified the configuration.</p>
     */
    inline BlockPublicAccessConfigurationMetadata& WithCreatedByArn(Aws::String&& value) { SetCreatedByArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name that created or last modified the configuration.</p>
     */
    inline BlockPublicAccessConfigurationMetadata& WithCreatedByArn(const char* value) { SetCreatedByArn(value); return *this;}

  private:

    Aws::Utils::DateTime m_creationDateTime;
    bool m_creationDateTimeHasBeenSet;

    Aws::String m_createdByArn;
    bool m_createdByArnHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
