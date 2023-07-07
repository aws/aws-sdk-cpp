/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/MetadataOperation.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>A structure that defines an Apache Iceberg metadata table to create in the
   * catalog.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/IcebergInput">AWS
   * API Reference</a></p>
   */
  class IcebergInput
  {
  public:
    AWS_GLUE_API IcebergInput();
    AWS_GLUE_API IcebergInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API IcebergInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A required metadata operation. Can only be set to <code>CREATE</code>.</p>
     */
    inline const MetadataOperation& GetMetadataOperation() const{ return m_metadataOperation; }

    /**
     * <p>A required metadata operation. Can only be set to <code>CREATE</code>.</p>
     */
    inline bool MetadataOperationHasBeenSet() const { return m_metadataOperationHasBeenSet; }

    /**
     * <p>A required metadata operation. Can only be set to <code>CREATE</code>.</p>
     */
    inline void SetMetadataOperation(const MetadataOperation& value) { m_metadataOperationHasBeenSet = true; m_metadataOperation = value; }

    /**
     * <p>A required metadata operation. Can only be set to <code>CREATE</code>.</p>
     */
    inline void SetMetadataOperation(MetadataOperation&& value) { m_metadataOperationHasBeenSet = true; m_metadataOperation = std::move(value); }

    /**
     * <p>A required metadata operation. Can only be set to <code>CREATE</code>.</p>
     */
    inline IcebergInput& WithMetadataOperation(const MetadataOperation& value) { SetMetadataOperation(value); return *this;}

    /**
     * <p>A required metadata operation. Can only be set to <code>CREATE</code>.</p>
     */
    inline IcebergInput& WithMetadataOperation(MetadataOperation&& value) { SetMetadataOperation(std::move(value)); return *this;}


    /**
     * <p>The table version for the Iceberg table. Defaults to 2.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The table version for the Iceberg table. Defaults to 2.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The table version for the Iceberg table. Defaults to 2.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The table version for the Iceberg table. Defaults to 2.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The table version for the Iceberg table. Defaults to 2.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The table version for the Iceberg table. Defaults to 2.</p>
     */
    inline IcebergInput& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The table version for the Iceberg table. Defaults to 2.</p>
     */
    inline IcebergInput& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The table version for the Iceberg table. Defaults to 2.</p>
     */
    inline IcebergInput& WithVersion(const char* value) { SetVersion(value); return *this;}

  private:

    MetadataOperation m_metadataOperation;
    bool m_metadataOperationHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
