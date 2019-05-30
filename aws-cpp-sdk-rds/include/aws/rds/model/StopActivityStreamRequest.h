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
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   */
  class AWS_RDS_API StopActivityStreamRequest : public RDSRequest
  {
  public:
    StopActivityStreamRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopActivityStream"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The Amazon Resource Name (ARN) of the DB cluster for the database activity
     * stream. For example,
     * <code>arn:aws:rds:us-east-1:12345667890:cluster:das-cluster</code>. </p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the DB cluster for the database activity
     * stream. For example,
     * <code>arn:aws:rds:us-east-1:12345667890:cluster:das-cluster</code>. </p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the DB cluster for the database activity
     * stream. For example,
     * <code>arn:aws:rds:us-east-1:12345667890:cluster:das-cluster</code>. </p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the DB cluster for the database activity
     * stream. For example,
     * <code>arn:aws:rds:us-east-1:12345667890:cluster:das-cluster</code>. </p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the DB cluster for the database activity
     * stream. For example,
     * <code>arn:aws:rds:us-east-1:12345667890:cluster:das-cluster</code>. </p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the DB cluster for the database activity
     * stream. For example,
     * <code>arn:aws:rds:us-east-1:12345667890:cluster:das-cluster</code>. </p>
     */
    inline StopActivityStreamRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the DB cluster for the database activity
     * stream. For example,
     * <code>arn:aws:rds:us-east-1:12345667890:cluster:das-cluster</code>. </p>
     */
    inline StopActivityStreamRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the DB cluster for the database activity
     * stream. For example,
     * <code>arn:aws:rds:us-east-1:12345667890:cluster:das-cluster</code>. </p>
     */
    inline StopActivityStreamRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>Specifies whether or not the database activity stream is to stop as soon as
     * possible, regardless of the maintenance window for the database.</p>
     */
    inline bool GetApplyImmediately() const{ return m_applyImmediately; }

    /**
     * <p>Specifies whether or not the database activity stream is to stop as soon as
     * possible, regardless of the maintenance window for the database.</p>
     */
    inline bool ApplyImmediatelyHasBeenSet() const { return m_applyImmediatelyHasBeenSet; }

    /**
     * <p>Specifies whether or not the database activity stream is to stop as soon as
     * possible, regardless of the maintenance window for the database.</p>
     */
    inline void SetApplyImmediately(bool value) { m_applyImmediatelyHasBeenSet = true; m_applyImmediately = value; }

    /**
     * <p>Specifies whether or not the database activity stream is to stop as soon as
     * possible, regardless of the maintenance window for the database.</p>
     */
    inline StopActivityStreamRequest& WithApplyImmediately(bool value) { SetApplyImmediately(value); return *this;}

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet;

    bool m_applyImmediately;
    bool m_applyImmediatelyHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
