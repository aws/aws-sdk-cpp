/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace MailManager
{
namespace Model
{

  /**
   * <p>This action replaces the email envelope recipients with the given list of
   * recipients. If the condition of this action applies only to a subset of
   * recipients, only those recipients are replaced with the recipients specified in
   * the action. The message contents and headers are unaffected by this action, only
   * the envelope recipients are updated.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/ReplaceRecipientAction">AWS
   * API Reference</a></p>
   */
  class ReplaceRecipientAction
  {
  public:
    AWS_MAILMANAGER_API ReplaceRecipientAction();
    AWS_MAILMANAGER_API ReplaceRecipientAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API ReplaceRecipientAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>This action specifies the replacement recipient email addresses to
     * insert.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReplaceWith() const{ return m_replaceWith; }
    inline bool ReplaceWithHasBeenSet() const { return m_replaceWithHasBeenSet; }
    inline void SetReplaceWith(const Aws::Vector<Aws::String>& value) { m_replaceWithHasBeenSet = true; m_replaceWith = value; }
    inline void SetReplaceWith(Aws::Vector<Aws::String>&& value) { m_replaceWithHasBeenSet = true; m_replaceWith = std::move(value); }
    inline ReplaceRecipientAction& WithReplaceWith(const Aws::Vector<Aws::String>& value) { SetReplaceWith(value); return *this;}
    inline ReplaceRecipientAction& WithReplaceWith(Aws::Vector<Aws::String>&& value) { SetReplaceWith(std::move(value)); return *this;}
    inline ReplaceRecipientAction& AddReplaceWith(const Aws::String& value) { m_replaceWithHasBeenSet = true; m_replaceWith.push_back(value); return *this; }
    inline ReplaceRecipientAction& AddReplaceWith(Aws::String&& value) { m_replaceWithHasBeenSet = true; m_replaceWith.push_back(std::move(value)); return *this; }
    inline ReplaceRecipientAction& AddReplaceWith(const char* value) { m_replaceWithHasBeenSet = true; m_replaceWith.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_replaceWith;
    bool m_replaceWithHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
