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
    AWS_GUARDDUTY_API Account();
    AWS_GUARDDUTY_API Account(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Account& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>ID of the member's Amazon Web Services account</p>
     */
    inline const Aws::String& GetUid() const{ return m_uid; }
    inline bool UidHasBeenSet() const { return m_uidHasBeenSet; }
    inline void SetUid(const Aws::String& value) { m_uidHasBeenSet = true; m_uid = value; }
    inline void SetUid(Aws::String&& value) { m_uidHasBeenSet = true; m_uid = std::move(value); }
    inline void SetUid(const char* value) { m_uidHasBeenSet = true; m_uid.assign(value); }
    inline Account& WithUid(const Aws::String& value) { SetUid(value); return *this;}
    inline Account& WithUid(Aws::String&& value) { SetUid(std::move(value)); return *this;}
    inline Account& WithUid(const char* value) { SetUid(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the member's Amazon Web Services account.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Account& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Account& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Account& WithName(const char* value) { SetName(value); return *this;}
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
