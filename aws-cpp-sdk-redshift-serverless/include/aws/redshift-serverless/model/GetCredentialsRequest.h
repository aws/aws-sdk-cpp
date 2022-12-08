/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/redshift-serverless/RedshiftServerlessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RedshiftServerless
{
namespace Model
{

  /**
   */
  class GetCredentialsRequest : public RedshiftServerlessRequest
  {
  public:
    AWS_REDSHIFTSERVERLESS_API GetCredentialsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCredentials"; }

    AWS_REDSHIFTSERVERLESS_API Aws::String SerializePayload() const override;

    AWS_REDSHIFTSERVERLESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the database to get temporary authorization to log on to.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be 1 to 64 alphanumeric characters or
     * hyphens.</p> </li> <li> <p>Must contain only uppercase or lowercase letters,
     * numbers, underscore, plus sign, period (dot), at symbol (@), or hyphen.</p>
     * </li> <li> <p>The first character must be a letter.</p> </li> <li> <p>Must not
     * contain a colon ( : ) or slash ( / ).</p> </li> <li> <p>Cannot be a reserved
     * word. A list of reserved words can be found in <a
     * href="https://docs.aws.amazon.com/redshift/latest/dg/r_pg_keywords.html">Reserved
     * Words </a> in the Amazon Redshift Database Developer Guide</p> </li> </ul>
     */
    inline const Aws::String& GetDbName() const{ return m_dbName; }

    /**
     * <p>The name of the database to get temporary authorization to log on to.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be 1 to 64 alphanumeric characters or
     * hyphens.</p> </li> <li> <p>Must contain only uppercase or lowercase letters,
     * numbers, underscore, plus sign, period (dot), at symbol (@), or hyphen.</p>
     * </li> <li> <p>The first character must be a letter.</p> </li> <li> <p>Must not
     * contain a colon ( : ) or slash ( / ).</p> </li> <li> <p>Cannot be a reserved
     * word. A list of reserved words can be found in <a
     * href="https://docs.aws.amazon.com/redshift/latest/dg/r_pg_keywords.html">Reserved
     * Words </a> in the Amazon Redshift Database Developer Guide</p> </li> </ul>
     */
    inline bool DbNameHasBeenSet() const { return m_dbNameHasBeenSet; }

    /**
     * <p>The name of the database to get temporary authorization to log on to.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be 1 to 64 alphanumeric characters or
     * hyphens.</p> </li> <li> <p>Must contain only uppercase or lowercase letters,
     * numbers, underscore, plus sign, period (dot), at symbol (@), or hyphen.</p>
     * </li> <li> <p>The first character must be a letter.</p> </li> <li> <p>Must not
     * contain a colon ( : ) or slash ( / ).</p> </li> <li> <p>Cannot be a reserved
     * word. A list of reserved words can be found in <a
     * href="https://docs.aws.amazon.com/redshift/latest/dg/r_pg_keywords.html">Reserved
     * Words </a> in the Amazon Redshift Database Developer Guide</p> </li> </ul>
     */
    inline void SetDbName(const Aws::String& value) { m_dbNameHasBeenSet = true; m_dbName = value; }

    /**
     * <p>The name of the database to get temporary authorization to log on to.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be 1 to 64 alphanumeric characters or
     * hyphens.</p> </li> <li> <p>Must contain only uppercase or lowercase letters,
     * numbers, underscore, plus sign, period (dot), at symbol (@), or hyphen.</p>
     * </li> <li> <p>The first character must be a letter.</p> </li> <li> <p>Must not
     * contain a colon ( : ) or slash ( / ).</p> </li> <li> <p>Cannot be a reserved
     * word. A list of reserved words can be found in <a
     * href="https://docs.aws.amazon.com/redshift/latest/dg/r_pg_keywords.html">Reserved
     * Words </a> in the Amazon Redshift Database Developer Guide</p> </li> </ul>
     */
    inline void SetDbName(Aws::String&& value) { m_dbNameHasBeenSet = true; m_dbName = std::move(value); }

    /**
     * <p>The name of the database to get temporary authorization to log on to.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be 1 to 64 alphanumeric characters or
     * hyphens.</p> </li> <li> <p>Must contain only uppercase or lowercase letters,
     * numbers, underscore, plus sign, period (dot), at symbol (@), or hyphen.</p>
     * </li> <li> <p>The first character must be a letter.</p> </li> <li> <p>Must not
     * contain a colon ( : ) or slash ( / ).</p> </li> <li> <p>Cannot be a reserved
     * word. A list of reserved words can be found in <a
     * href="https://docs.aws.amazon.com/redshift/latest/dg/r_pg_keywords.html">Reserved
     * Words </a> in the Amazon Redshift Database Developer Guide</p> </li> </ul>
     */
    inline void SetDbName(const char* value) { m_dbNameHasBeenSet = true; m_dbName.assign(value); }

    /**
     * <p>The name of the database to get temporary authorization to log on to.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be 1 to 64 alphanumeric characters or
     * hyphens.</p> </li> <li> <p>Must contain only uppercase or lowercase letters,
     * numbers, underscore, plus sign, period (dot), at symbol (@), or hyphen.</p>
     * </li> <li> <p>The first character must be a letter.</p> </li> <li> <p>Must not
     * contain a colon ( : ) or slash ( / ).</p> </li> <li> <p>Cannot be a reserved
     * word. A list of reserved words can be found in <a
     * href="https://docs.aws.amazon.com/redshift/latest/dg/r_pg_keywords.html">Reserved
     * Words </a> in the Amazon Redshift Database Developer Guide</p> </li> </ul>
     */
    inline GetCredentialsRequest& WithDbName(const Aws::String& value) { SetDbName(value); return *this;}

    /**
     * <p>The name of the database to get temporary authorization to log on to.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be 1 to 64 alphanumeric characters or
     * hyphens.</p> </li> <li> <p>Must contain only uppercase or lowercase letters,
     * numbers, underscore, plus sign, period (dot), at symbol (@), or hyphen.</p>
     * </li> <li> <p>The first character must be a letter.</p> </li> <li> <p>Must not
     * contain a colon ( : ) or slash ( / ).</p> </li> <li> <p>Cannot be a reserved
     * word. A list of reserved words can be found in <a
     * href="https://docs.aws.amazon.com/redshift/latest/dg/r_pg_keywords.html">Reserved
     * Words </a> in the Amazon Redshift Database Developer Guide</p> </li> </ul>
     */
    inline GetCredentialsRequest& WithDbName(Aws::String&& value) { SetDbName(std::move(value)); return *this;}

    /**
     * <p>The name of the database to get temporary authorization to log on to.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be 1 to 64 alphanumeric characters or
     * hyphens.</p> </li> <li> <p>Must contain only uppercase or lowercase letters,
     * numbers, underscore, plus sign, period (dot), at symbol (@), or hyphen.</p>
     * </li> <li> <p>The first character must be a letter.</p> </li> <li> <p>Must not
     * contain a colon ( : ) or slash ( / ).</p> </li> <li> <p>Cannot be a reserved
     * word. A list of reserved words can be found in <a
     * href="https://docs.aws.amazon.com/redshift/latest/dg/r_pg_keywords.html">Reserved
     * Words </a> in the Amazon Redshift Database Developer Guide</p> </li> </ul>
     */
    inline GetCredentialsRequest& WithDbName(const char* value) { SetDbName(value); return *this;}


    /**
     * <p>The number of seconds until the returned temporary password expires. The
     * minimum is 900 seconds, and the maximum is 3600 seconds.</p>
     */
    inline int GetDurationSeconds() const{ return m_durationSeconds; }

    /**
     * <p>The number of seconds until the returned temporary password expires. The
     * minimum is 900 seconds, and the maximum is 3600 seconds.</p>
     */
    inline bool DurationSecondsHasBeenSet() const { return m_durationSecondsHasBeenSet; }

    /**
     * <p>The number of seconds until the returned temporary password expires. The
     * minimum is 900 seconds, and the maximum is 3600 seconds.</p>
     */
    inline void SetDurationSeconds(int value) { m_durationSecondsHasBeenSet = true; m_durationSeconds = value; }

    /**
     * <p>The number of seconds until the returned temporary password expires. The
     * minimum is 900 seconds, and the maximum is 3600 seconds.</p>
     */
    inline GetCredentialsRequest& WithDurationSeconds(int value) { SetDurationSeconds(value); return *this;}


    /**
     * <p>The name of the workgroup associated with the database.</p>
     */
    inline const Aws::String& GetWorkgroupName() const{ return m_workgroupName; }

    /**
     * <p>The name of the workgroup associated with the database.</p>
     */
    inline bool WorkgroupNameHasBeenSet() const { return m_workgroupNameHasBeenSet; }

    /**
     * <p>The name of the workgroup associated with the database.</p>
     */
    inline void SetWorkgroupName(const Aws::String& value) { m_workgroupNameHasBeenSet = true; m_workgroupName = value; }

    /**
     * <p>The name of the workgroup associated with the database.</p>
     */
    inline void SetWorkgroupName(Aws::String&& value) { m_workgroupNameHasBeenSet = true; m_workgroupName = std::move(value); }

    /**
     * <p>The name of the workgroup associated with the database.</p>
     */
    inline void SetWorkgroupName(const char* value) { m_workgroupNameHasBeenSet = true; m_workgroupName.assign(value); }

    /**
     * <p>The name of the workgroup associated with the database.</p>
     */
    inline GetCredentialsRequest& WithWorkgroupName(const Aws::String& value) { SetWorkgroupName(value); return *this;}

    /**
     * <p>The name of the workgroup associated with the database.</p>
     */
    inline GetCredentialsRequest& WithWorkgroupName(Aws::String&& value) { SetWorkgroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the workgroup associated with the database.</p>
     */
    inline GetCredentialsRequest& WithWorkgroupName(const char* value) { SetWorkgroupName(value); return *this;}

  private:

    Aws::String m_dbName;
    bool m_dbNameHasBeenSet = false;

    int m_durationSeconds;
    bool m_durationSecondsHasBeenSet = false;

    Aws::String m_workgroupName;
    bool m_workgroupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
