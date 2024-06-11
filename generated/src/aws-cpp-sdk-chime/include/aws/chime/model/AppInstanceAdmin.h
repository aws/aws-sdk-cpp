﻿/**
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
   * <p>The details of an <code>AppInstanceAdmin</code>.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/AppInstanceAdmin">AWS
   * API Reference</a></p>
   */
  class AppInstanceAdmin
  {
  public:
    AWS_CHIME_API AppInstanceAdmin();
    AWS_CHIME_API AppInstanceAdmin(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API AppInstanceAdmin& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>AppInstanceAdmin</code> data.</p>
     */
    inline const Identity& GetAdmin() const{ return m_admin; }
    inline bool AdminHasBeenSet() const { return m_adminHasBeenSet; }
    inline void SetAdmin(const Identity& value) { m_adminHasBeenSet = true; m_admin = value; }
    inline void SetAdmin(Identity&& value) { m_adminHasBeenSet = true; m_admin = std::move(value); }
    inline AppInstanceAdmin& WithAdmin(const Identity& value) { SetAdmin(value); return *this;}
    inline AppInstanceAdmin& WithAdmin(Identity&& value) { SetAdmin(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the <code>AppInstance</code> for which the user is an
     * administrator.</p>
     */
    inline const Aws::String& GetAppInstanceArn() const{ return m_appInstanceArn; }
    inline bool AppInstanceArnHasBeenSet() const { return m_appInstanceArnHasBeenSet; }
    inline void SetAppInstanceArn(const Aws::String& value) { m_appInstanceArnHasBeenSet = true; m_appInstanceArn = value; }
    inline void SetAppInstanceArn(Aws::String&& value) { m_appInstanceArnHasBeenSet = true; m_appInstanceArn = std::move(value); }
    inline void SetAppInstanceArn(const char* value) { m_appInstanceArnHasBeenSet = true; m_appInstanceArn.assign(value); }
    inline AppInstanceAdmin& WithAppInstanceArn(const Aws::String& value) { SetAppInstanceArn(value); return *this;}
    inline AppInstanceAdmin& WithAppInstanceArn(Aws::String&& value) { SetAppInstanceArn(std::move(value)); return *this;}
    inline AppInstanceAdmin& WithAppInstanceArn(const char* value) { SetAppInstanceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which an administrator was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }
    inline AppInstanceAdmin& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}
    inline AppInstanceAdmin& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}
    ///@}
  private:

    Identity m_admin;
    bool m_adminHasBeenSet = false;

    Aws::String m_appInstanceArn;
    bool m_appInstanceArnHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
