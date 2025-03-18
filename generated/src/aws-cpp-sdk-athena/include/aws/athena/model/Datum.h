/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
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
namespace Athena
{
namespace Model
{

  /**
   * <p>A piece of data (a field in the table).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/Datum">AWS API
   * Reference</a></p>
   */
  class Datum
  {
  public:
    AWS_ATHENA_API Datum() = default;
    AWS_ATHENA_API Datum(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Datum& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The value of the datum.</p>
     */
    inline const Aws::String& GetVarCharValue() const { return m_varCharValue; }
    inline bool VarCharValueHasBeenSet() const { return m_varCharValueHasBeenSet; }
    template<typename VarCharValueT = Aws::String>
    void SetVarCharValue(VarCharValueT&& value) { m_varCharValueHasBeenSet = true; m_varCharValue = std::forward<VarCharValueT>(value); }
    template<typename VarCharValueT = Aws::String>
    Datum& WithVarCharValue(VarCharValueT&& value) { SetVarCharValue(std::forward<VarCharValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_varCharValue;
    bool m_varCharValueHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
