/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
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
namespace drs
{
namespace Model
{

  /**
   * <p>Operating System.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/OS">AWS API
   * Reference</a></p>
   */
  class OS
  {
  public:
    AWS_DRS_API OS() = default;
    AWS_DRS_API OS(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API OS& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The long name of the Operating System.</p>
     */
    inline const Aws::String& GetFullString() const { return m_fullString; }
    inline bool FullStringHasBeenSet() const { return m_fullStringHasBeenSet; }
    template<typename FullStringT = Aws::String>
    void SetFullString(FullStringT&& value) { m_fullStringHasBeenSet = true; m_fullString = std::forward<FullStringT>(value); }
    template<typename FullStringT = Aws::String>
    OS& WithFullString(FullStringT&& value) { SetFullString(std::forward<FullStringT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_fullString;
    bool m_fullStringHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
