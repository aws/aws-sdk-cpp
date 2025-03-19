/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains information about the account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/Account">AWS
   * API Reference</a></p>
   */
  class Account
  {
  public:
    AWS_GUARDDUTY_API Account() = default;
    AWS_GUARDDUTY_API Account(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Account& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>ID of the member's Amazon Web Services account</p>
     */
    inline const Aws::String& GetUid() const { return m_uid; }
    inline bool UidHasBeenSet() const { return m_uidHasBeenSet; }
    template<typename UidT = Aws::String>
    void SetUid(UidT&& value) { m_uidHasBeenSet = true; m_uid = std::forward<UidT>(value); }
    template<typename UidT = Aws::String>
    Account& WithUid(UidT&& value) { SetUid(std::forward<UidT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the member's Amazon Web Services account.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Account& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_uid;
    bool m_uidHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
