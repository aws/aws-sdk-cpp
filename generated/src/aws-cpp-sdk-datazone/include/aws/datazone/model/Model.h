/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The model of the API.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/Model">AWS API
   * Reference</a></p>
   */
  class Model
  {
  public:
    AWS_DATAZONE_API Model() = default;
    AWS_DATAZONE_API Model(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Model& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates the smithy model of the API.</p>
     */
    inline const Aws::String& GetSmithy() const { return m_smithy; }
    inline bool SmithyHasBeenSet() const { return m_smithyHasBeenSet; }
    template<typename SmithyT = Aws::String>
    void SetSmithy(SmithyT&& value) { m_smithyHasBeenSet = true; m_smithy = std::forward<SmithyT>(value); }
    template<typename SmithyT = Aws::String>
    Model& WithSmithy(SmithyT&& value) { SetSmithy(std::forward<SmithyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_smithy;
    bool m_smithyHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
