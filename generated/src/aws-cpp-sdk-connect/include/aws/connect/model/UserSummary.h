﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Contains summary information about a user.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UserSummary">AWS
   * API Reference</a></p>
   */
  class UserSummary
  {
  public:
    AWS_CONNECT_API UserSummary();
    AWS_CONNECT_API UserSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API UserSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the user account.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the user account.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier of the user account.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the user account.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier of the user account.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of the user account.</p>
     */
    inline UserSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the user account.</p>
     */
    inline UserSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the user account.</p>
     */
    inline UserSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the user account.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user account.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user account.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user account.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user account.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user account.</p>
     */
    inline UserSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user account.</p>
     */
    inline UserSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user account.</p>
     */
    inline UserSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The Amazon Connect user name of the user account.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * <p>The Amazon Connect user name of the user account.</p>
     */
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }

    /**
     * <p>The Amazon Connect user name of the user account.</p>
     */
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * <p>The Amazon Connect user name of the user account.</p>
     */
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }

    /**
     * <p>The Amazon Connect user name of the user account.</p>
     */
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }

    /**
     * <p>The Amazon Connect user name of the user account.</p>
     */
    inline UserSummary& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * <p>The Amazon Connect user name of the user account.</p>
     */
    inline UserSummary& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    /**
     * <p>The Amazon Connect user name of the user account.</p>
     */
    inline UserSummary& WithUsername(const char* value) { SetUsername(value); return *this;}


    /**
     * <p>The timestamp when this resource was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The timestamp when this resource was last modified.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>The timestamp when this resource was last modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>The timestamp when this resource was last modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>The timestamp when this resource was last modified.</p>
     */
    inline UserSummary& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The timestamp when this resource was last modified.</p>
     */
    inline UserSummary& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>The Amazon Web Services Region where this resource was last modified.</p>
     */
    inline const Aws::String& GetLastModifiedRegion() const{ return m_lastModifiedRegion; }

    /**
     * <p>The Amazon Web Services Region where this resource was last modified.</p>
     */
    inline bool LastModifiedRegionHasBeenSet() const { return m_lastModifiedRegionHasBeenSet; }

    /**
     * <p>The Amazon Web Services Region where this resource was last modified.</p>
     */
    inline void SetLastModifiedRegion(const Aws::String& value) { m_lastModifiedRegionHasBeenSet = true; m_lastModifiedRegion = value; }

    /**
     * <p>The Amazon Web Services Region where this resource was last modified.</p>
     */
    inline void SetLastModifiedRegion(Aws::String&& value) { m_lastModifiedRegionHasBeenSet = true; m_lastModifiedRegion = std::move(value); }

    /**
     * <p>The Amazon Web Services Region where this resource was last modified.</p>
     */
    inline void SetLastModifiedRegion(const char* value) { m_lastModifiedRegionHasBeenSet = true; m_lastModifiedRegion.assign(value); }

    /**
     * <p>The Amazon Web Services Region where this resource was last modified.</p>
     */
    inline UserSummary& WithLastModifiedRegion(const Aws::String& value) { SetLastModifiedRegion(value); return *this;}

    /**
     * <p>The Amazon Web Services Region where this resource was last modified.</p>
     */
    inline UserSummary& WithLastModifiedRegion(Aws::String&& value) { SetLastModifiedRegion(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Region where this resource was last modified.</p>
     */
    inline UserSummary& WithLastModifiedRegion(const char* value) { SetLastModifiedRegion(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_lastModifiedRegion;
    bool m_lastModifiedRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
