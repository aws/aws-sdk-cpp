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
   * <p>Contains information about the EC2 instance profile.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/IamInstanceProfile">AWS
   * API Reference</a></p>
   */
  class IamInstanceProfile
  {
  public:
    AWS_GUARDDUTY_API IamInstanceProfile();
    AWS_GUARDDUTY_API IamInstanceProfile(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API IamInstanceProfile& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The profile ARN of the EC2 instance.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline IamInstanceProfile& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline IamInstanceProfile& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline IamInstanceProfile& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The profile ID of the EC2 instance.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline IamInstanceProfile& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline IamInstanceProfile& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline IamInstanceProfile& WithId(const char* value) { SetId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
