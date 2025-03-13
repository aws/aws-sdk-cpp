/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>

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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The IAM properties of a connection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/IamPropertiesInput">AWS
   * API Reference</a></p>
   */
  class IamPropertiesInput
  {
  public:
    AWS_DATAZONE_API IamPropertiesInput() = default;
    AWS_DATAZONE_API IamPropertiesInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API IamPropertiesInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether Amazon Web Services Glue lineage sync is enabled for a
     * connection.</p>
     */
    inline bool GetGlueLineageSyncEnabled() const { return m_glueLineageSyncEnabled; }
    inline bool GlueLineageSyncEnabledHasBeenSet() const { return m_glueLineageSyncEnabledHasBeenSet; }
    inline void SetGlueLineageSyncEnabled(bool value) { m_glueLineageSyncEnabledHasBeenSet = true; m_glueLineageSyncEnabled = value; }
    inline IamPropertiesInput& WithGlueLineageSyncEnabled(bool value) { SetGlueLineageSyncEnabled(value); return *this;}
    ///@}
  private:

    bool m_glueLineageSyncEnabled{false};
    bool m_glueLineageSyncEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
