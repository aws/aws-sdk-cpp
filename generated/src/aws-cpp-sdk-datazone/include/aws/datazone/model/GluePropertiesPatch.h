/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/GlueConnectionPatch.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The Amazon Web Services Glue properties patch of a connection.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/GluePropertiesPatch">AWS
   * API Reference</a></p>
   */
  class GluePropertiesPatch
  {
  public:
    AWS_DATAZONE_API GluePropertiesPatch() = default;
    AWS_DATAZONE_API GluePropertiesPatch(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API GluePropertiesPatch& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services Glue properties patch of a connection.</p>
     */
    inline const GlueConnectionPatch& GetGlueConnectionInput() const { return m_glueConnectionInput; }
    inline bool GlueConnectionInputHasBeenSet() const { return m_glueConnectionInputHasBeenSet; }
    template<typename GlueConnectionInputT = GlueConnectionPatch>
    void SetGlueConnectionInput(GlueConnectionInputT&& value) { m_glueConnectionInputHasBeenSet = true; m_glueConnectionInput = std::forward<GlueConnectionInputT>(value); }
    template<typename GlueConnectionInputT = GlueConnectionPatch>
    GluePropertiesPatch& WithGlueConnectionInput(GlueConnectionInputT&& value) { SetGlueConnectionInput(std::forward<GlueConnectionInputT>(value)); return *this;}
    ///@}
  private:

    GlueConnectionPatch m_glueConnectionInput;
    bool m_glueConnectionInputHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
