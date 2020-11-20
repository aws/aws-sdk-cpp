/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/Identity.h>
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
namespace Chime
{
namespace Model
{

  /**
   * <p>Promotes a user to the administrator role for the duration of an app
   * instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/AppInstanceAdmin">AWS
   * API Reference</a></p>
   */
  class AWS_CHIME_API AppInstanceAdmin
  {
  public:
    AppInstanceAdmin();
    AppInstanceAdmin(Aws::Utils::Json::JsonView jsonValue);
    AppInstanceAdmin& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name and metadata of the app instance administrator.</p>
     */
    inline const Identity& GetAdmin() const{ return m_admin; }

    /**
     * <p>The name and metadata of the app instance administrator.</p>
     */
    inline bool AdminHasBeenSet() const { return m_adminHasBeenSet; }

    /**
     * <p>The name and metadata of the app instance administrator.</p>
     */
    inline void SetAdmin(const Identity& value) { m_adminHasBeenSet = true; m_admin = value; }

    /**
     * <p>The name and metadata of the app instance administrator.</p>
     */
    inline void SetAdmin(Identity&& value) { m_adminHasBeenSet = true; m_admin = std::move(value); }

    /**
     * <p>The name and metadata of the app instance administrator.</p>
     */
    inline AppInstanceAdmin& WithAdmin(const Identity& value) { SetAdmin(value); return *this;}

    /**
     * <p>The name and metadata of the app instance administrator.</p>
     */
    inline AppInstanceAdmin& WithAdmin(Identity&& value) { SetAdmin(std::move(value)); return *this;}


    /**
     * <p>The ARN of the app instance administrator.</p>
     */
    inline const Aws::String& GetAppInstanceArn() const{ return m_appInstanceArn; }

    /**
     * <p>The ARN of the app instance administrator.</p>
     */
    inline bool AppInstanceArnHasBeenSet() const { return m_appInstanceArnHasBeenSet; }

    /**
     * <p>The ARN of the app instance administrator.</p>
     */
    inline void SetAppInstanceArn(const Aws::String& value) { m_appInstanceArnHasBeenSet = true; m_appInstanceArn = value; }

    /**
     * <p>The ARN of the app instance administrator.</p>
     */
    inline void SetAppInstanceArn(Aws::String&& value) { m_appInstanceArnHasBeenSet = true; m_appInstanceArn = std::move(value); }

    /**
     * <p>The ARN of the app instance administrator.</p>
     */
    inline void SetAppInstanceArn(const char* value) { m_appInstanceArnHasBeenSet = true; m_appInstanceArn.assign(value); }

    /**
     * <p>The ARN of the app instance administrator.</p>
     */
    inline AppInstanceAdmin& WithAppInstanceArn(const Aws::String& value) { SetAppInstanceArn(value); return *this;}

    /**
     * <p>The ARN of the app instance administrator.</p>
     */
    inline AppInstanceAdmin& WithAppInstanceArn(Aws::String&& value) { SetAppInstanceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the app instance administrator.</p>
     */
    inline AppInstanceAdmin& WithAppInstanceArn(const char* value) { SetAppInstanceArn(value); return *this;}


    /**
     * <p>The time at which an administrator was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    /**
     * <p>The time at which an administrator was created.</p>
     */
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }

    /**
     * <p>The time at which an administrator was created.</p>
     */
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }

    /**
     * <p>The time at which an administrator was created.</p>
     */
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }

    /**
     * <p>The time at which an administrator was created.</p>
     */
    inline AppInstanceAdmin& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    /**
     * <p>The time at which an administrator was created.</p>
     */
    inline AppInstanceAdmin& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}

  private:

    Identity m_admin;
    bool m_adminHasBeenSet;

    Aws::String m_appInstanceArn;
    bool m_appInstanceArnHasBeenSet;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
