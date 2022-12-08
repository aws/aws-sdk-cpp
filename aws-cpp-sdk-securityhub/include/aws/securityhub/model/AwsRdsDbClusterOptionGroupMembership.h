/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Information about an option group membership for a DB cluster.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsRdsDbClusterOptionGroupMembership">AWS
   * API Reference</a></p>
   */
  class AwsRdsDbClusterOptionGroupMembership
  {
  public:
    AWS_SECURITYHUB_API AwsRdsDbClusterOptionGroupMembership();
    AWS_SECURITYHUB_API AwsRdsDbClusterOptionGroupMembership(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsRdsDbClusterOptionGroupMembership& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the DB cluster option group.</p>
     */
    inline const Aws::String& GetDbClusterOptionGroupName() const{ return m_dbClusterOptionGroupName; }

    /**
     * <p>The name of the DB cluster option group.</p>
     */
    inline bool DbClusterOptionGroupNameHasBeenSet() const { return m_dbClusterOptionGroupNameHasBeenSet; }

    /**
     * <p>The name of the DB cluster option group.</p>
     */
    inline void SetDbClusterOptionGroupName(const Aws::String& value) { m_dbClusterOptionGroupNameHasBeenSet = true; m_dbClusterOptionGroupName = value; }

    /**
     * <p>The name of the DB cluster option group.</p>
     */
    inline void SetDbClusterOptionGroupName(Aws::String&& value) { m_dbClusterOptionGroupNameHasBeenSet = true; m_dbClusterOptionGroupName = std::move(value); }

    /**
     * <p>The name of the DB cluster option group.</p>
     */
    inline void SetDbClusterOptionGroupName(const char* value) { m_dbClusterOptionGroupNameHasBeenSet = true; m_dbClusterOptionGroupName.assign(value); }

    /**
     * <p>The name of the DB cluster option group.</p>
     */
    inline AwsRdsDbClusterOptionGroupMembership& WithDbClusterOptionGroupName(const Aws::String& value) { SetDbClusterOptionGroupName(value); return *this;}

    /**
     * <p>The name of the DB cluster option group.</p>
     */
    inline AwsRdsDbClusterOptionGroupMembership& WithDbClusterOptionGroupName(Aws::String&& value) { SetDbClusterOptionGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the DB cluster option group.</p>
     */
    inline AwsRdsDbClusterOptionGroupMembership& WithDbClusterOptionGroupName(const char* value) { SetDbClusterOptionGroupName(value); return *this;}


    /**
     * <p>The status of the DB cluster option group.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the DB cluster option group.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the DB cluster option group.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the DB cluster option group.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the DB cluster option group.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the DB cluster option group.</p>
     */
    inline AwsRdsDbClusterOptionGroupMembership& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the DB cluster option group.</p>
     */
    inline AwsRdsDbClusterOptionGroupMembership& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the DB cluster option group.</p>
     */
    inline AwsRdsDbClusterOptionGroupMembership& WithStatus(const char* value) { SetStatus(value); return *this;}

  private:

    Aws::String m_dbClusterOptionGroupName;
    bool m_dbClusterOptionGroupNameHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
