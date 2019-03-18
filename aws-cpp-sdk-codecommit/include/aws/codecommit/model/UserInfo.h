/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_CODECOMMIT_API UserInfo
  {
  public:
    UserInfo();
    UserInfo(Aws::Utils::Json::JsonView jsonValue);
    UserInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the user who made the specified commit.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the user who made the specified commit.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the user who made the specified commit.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the user who made the specified commit.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the user who made the specified commit.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the user who made the specified commit.</p>
     */
    inline UserInfo& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the user who made the specified commit.</p>
     */
    inline UserInfo& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the user who made the specified commit.</p>
     */
    inline UserInfo& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The email address associated with the user who made the commit, if any.</p>
     */
    inline const Aws::String& GetEmail() const{ return m_email; }

    /**
     * <p>The email address associated with the user who made the commit, if any.</p>
     */
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }

    /**
     * <p>The email address associated with the user who made the commit, if any.</p>
     */
    inline void SetEmail(const Aws::String& value) { m_emailHasBeenSet = true; m_email = value; }

    /**
     * <p>The email address associated with the user who made the commit, if any.</p>
     */
    inline void SetEmail(Aws::String&& value) { m_emailHasBeenSet = true; m_email = std::move(value); }

    /**
     * <p>The email address associated with the user who made the commit, if any.</p>
     */
    inline void SetEmail(const char* value) { m_emailHasBeenSet = true; m_email.assign(value); }

    /**
     * <p>The email address associated with the user who made the commit, if any.</p>
     */
    inline UserInfo& WithEmail(const Aws::String& value) { SetEmail(value); return *this;}

    /**
     * <p>The email address associated with the user who made the commit, if any.</p>
     */
    inline UserInfo& WithEmail(Aws::String&& value) { SetEmail(std::move(value)); return *this;}

    /**
     * <p>The email address associated with the user who made the commit, if any.</p>
     */
    inline UserInfo& WithEmail(const char* value) { SetEmail(value); return *this;}


    /**
     * <p>The date when the specified commit was commited, in timestamp format with GMT
     * offset.</p>
     */
    inline const Aws::String& GetDate() const{ return m_date; }

    /**
     * <p>The date when the specified commit was commited, in timestamp format with GMT
     * offset.</p>
     */
    inline bool DateHasBeenSet() const { return m_dateHasBeenSet; }

    /**
     * <p>The date when the specified commit was commited, in timestamp format with GMT
     * offset.</p>
     */
    inline void SetDate(const Aws::String& value) { m_dateHasBeenSet = true; m_date = value; }

    /**
     * <p>The date when the specified commit was commited, in timestamp format with GMT
     * offset.</p>
     */
    inline void SetDate(Aws::String&& value) { m_dateHasBeenSet = true; m_date = std::move(value); }

    /**
     * <p>The date when the specified commit was commited, in timestamp format with GMT
     * offset.</p>
     */
    inline void SetDate(const char* value) { m_dateHasBeenSet = true; m_date.assign(value); }

    /**
     * <p>The date when the specified commit was commited, in timestamp format with GMT
     * offset.</p>
     */
    inline UserInfo& WithDate(const Aws::String& value) { SetDate(value); return *this;}

    /**
     * <p>The date when the specified commit was commited, in timestamp format with GMT
     * offset.</p>
     */
    inline UserInfo& WithDate(Aws::String&& value) { SetDate(std::move(value)); return *this;}

    /**
     * <p>The date when the specified commit was commited, in timestamp format with GMT
     * offset.</p>
     */
    inline UserInfo& WithDate(const char* value) { SetDate(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_email;
    bool m_emailHasBeenSet;

    Aws::String m_date;
    bool m_dateHasBeenSet;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
