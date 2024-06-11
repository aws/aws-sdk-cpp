﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
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
namespace CodeCommit
{
namespace Model
{

  /**
   * <p>Information about the user who made a specified commit.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UserInfo">AWS
   * API Reference</a></p>
   */
  class UserInfo
  {
  public:
    AWS_CODECOMMIT_API UserInfo();
    AWS_CODECOMMIT_API UserInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API UserInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the user who made the specified commit.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UserInfo& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UserInfo& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UserInfo& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address associated with the user who made the commit, if any.</p>
     */
    inline const Aws::String& GetEmail() const{ return m_email; }
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }
    inline void SetEmail(const Aws::String& value) { m_emailHasBeenSet = true; m_email = value; }
    inline void SetEmail(Aws::String&& value) { m_emailHasBeenSet = true; m_email = std::move(value); }
    inline void SetEmail(const char* value) { m_emailHasBeenSet = true; m_email.assign(value); }
    inline UserInfo& WithEmail(const Aws::String& value) { SetEmail(value); return *this;}
    inline UserInfo& WithEmail(Aws::String&& value) { SetEmail(std::move(value)); return *this;}
    inline UserInfo& WithEmail(const char* value) { SetEmail(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the specified commit was commited, in timestamp format with GMT
     * offset.</p>
     */
    inline const Aws::String& GetDate() const{ return m_date; }
    inline bool DateHasBeenSet() const { return m_dateHasBeenSet; }
    inline void SetDate(const Aws::String& value) { m_dateHasBeenSet = true; m_date = value; }
    inline void SetDate(Aws::String&& value) { m_dateHasBeenSet = true; m_date = std::move(value); }
    inline void SetDate(const char* value) { m_dateHasBeenSet = true; m_date.assign(value); }
    inline UserInfo& WithDate(const Aws::String& value) { SetDate(value); return *this;}
    inline UserInfo& WithDate(Aws::String&& value) { SetDate(std::move(value)); return *this;}
    inline UserInfo& WithDate(const char* value) { SetDate(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_email;
    bool m_emailHasBeenSet = false;

    Aws::String m_date;
    bool m_dateHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
