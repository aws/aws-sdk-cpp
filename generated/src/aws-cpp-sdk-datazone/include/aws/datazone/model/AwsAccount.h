/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The account ID of a project.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/AwsAccount">AWS
   * API Reference</a></p>
   */
  class AwsAccount
  {
  public:
    AWS_DATAZONE_API AwsAccount();
    AWS_DATAZONE_API AwsAccount(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API AwsAccount& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The account ID of a project.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }
    inline AwsAccount& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}
    inline AwsAccount& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}
    inline AwsAccount& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account ID path of a project.</p>
     */
    inline const Aws::String& GetAwsAccountIdPath() const{ return m_awsAccountIdPath; }
    inline bool AwsAccountIdPathHasBeenSet() const { return m_awsAccountIdPathHasBeenSet; }
    inline void SetAwsAccountIdPath(const Aws::String& value) { m_awsAccountIdPathHasBeenSet = true; m_awsAccountIdPath = value; }
    inline void SetAwsAccountIdPath(Aws::String&& value) { m_awsAccountIdPathHasBeenSet = true; m_awsAccountIdPath = std::move(value); }
    inline void SetAwsAccountIdPath(const char* value) { m_awsAccountIdPathHasBeenSet = true; m_awsAccountIdPath.assign(value); }
    inline AwsAccount& WithAwsAccountIdPath(const Aws::String& value) { SetAwsAccountIdPath(value); return *this;}
    inline AwsAccount& WithAwsAccountIdPath(Aws::String&& value) { SetAwsAccountIdPath(std::move(value)); return *this;}
    inline AwsAccount& WithAwsAccountIdPath(const char* value) { SetAwsAccountIdPath(value); return *this;}
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_awsAccountIdPath;
    bool m_awsAccountIdPathHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
