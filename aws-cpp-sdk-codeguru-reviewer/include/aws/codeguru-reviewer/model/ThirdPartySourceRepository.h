/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
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
namespace CodeGuruReviewer
{
namespace Model
{

  /**
   * <p> Information about a third-party source repository connected to CodeGuru
   * Reviewer. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/ThirdPartySourceRepository">AWS
   * API Reference</a></p>
   */
  class AWS_CODEGURUREVIEWER_API ThirdPartySourceRepository
  {
  public:
    ThirdPartySourceRepository();
    ThirdPartySourceRepository(Aws::Utils::Json::JsonView jsonValue);
    ThirdPartySourceRepository& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The name of the third party source repository. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name of the third party source repository. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The name of the third party source repository. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The name of the third party source repository. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The name of the third party source repository. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The name of the third party source repository. </p>
     */
    inline ThirdPartySourceRepository& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of the third party source repository. </p>
     */
    inline ThirdPartySourceRepository& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of the third party source repository. </p>
     */
    inline ThirdPartySourceRepository& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) of an AWS CodeStar Connections connection.
     * Its format is
     * <code>arn:aws:codestar-connections:region-id:aws-account_id:connection/connection-id</code>.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/codestar-connections/latest/APIReference/API_Connection.html">
     * <code>Connection</code> </a> in the <i>AWS CodeStar Connections API
     * Reference</i>. </p>
     */
    inline const Aws::String& GetConnectionArn() const{ return m_connectionArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of an AWS CodeStar Connections connection.
     * Its format is
     * <code>arn:aws:codestar-connections:region-id:aws-account_id:connection/connection-id</code>.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/codestar-connections/latest/APIReference/API_Connection.html">
     * <code>Connection</code> </a> in the <i>AWS CodeStar Connections API
     * Reference</i>. </p>
     */
    inline bool ConnectionArnHasBeenSet() const { return m_connectionArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of an AWS CodeStar Connections connection.
     * Its format is
     * <code>arn:aws:codestar-connections:region-id:aws-account_id:connection/connection-id</code>.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/codestar-connections/latest/APIReference/API_Connection.html">
     * <code>Connection</code> </a> in the <i>AWS CodeStar Connections API
     * Reference</i>. </p>
     */
    inline void SetConnectionArn(const Aws::String& value) { m_connectionArnHasBeenSet = true; m_connectionArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of an AWS CodeStar Connections connection.
     * Its format is
     * <code>arn:aws:codestar-connections:region-id:aws-account_id:connection/connection-id</code>.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/codestar-connections/latest/APIReference/API_Connection.html">
     * <code>Connection</code> </a> in the <i>AWS CodeStar Connections API
     * Reference</i>. </p>
     */
    inline void SetConnectionArn(Aws::String&& value) { m_connectionArnHasBeenSet = true; m_connectionArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of an AWS CodeStar Connections connection.
     * Its format is
     * <code>arn:aws:codestar-connections:region-id:aws-account_id:connection/connection-id</code>.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/codestar-connections/latest/APIReference/API_Connection.html">
     * <code>Connection</code> </a> in the <i>AWS CodeStar Connections API
     * Reference</i>. </p>
     */
    inline void SetConnectionArn(const char* value) { m_connectionArnHasBeenSet = true; m_connectionArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of an AWS CodeStar Connections connection.
     * Its format is
     * <code>arn:aws:codestar-connections:region-id:aws-account_id:connection/connection-id</code>.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/codestar-connections/latest/APIReference/API_Connection.html">
     * <code>Connection</code> </a> in the <i>AWS CodeStar Connections API
     * Reference</i>. </p>
     */
    inline ThirdPartySourceRepository& WithConnectionArn(const Aws::String& value) { SetConnectionArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of an AWS CodeStar Connections connection.
     * Its format is
     * <code>arn:aws:codestar-connections:region-id:aws-account_id:connection/connection-id</code>.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/codestar-connections/latest/APIReference/API_Connection.html">
     * <code>Connection</code> </a> in the <i>AWS CodeStar Connections API
     * Reference</i>. </p>
     */
    inline ThirdPartySourceRepository& WithConnectionArn(Aws::String&& value) { SetConnectionArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of an AWS CodeStar Connections connection.
     * Its format is
     * <code>arn:aws:codestar-connections:region-id:aws-account_id:connection/connection-id</code>.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/codestar-connections/latest/APIReference/API_Connection.html">
     * <code>Connection</code> </a> in the <i>AWS CodeStar Connections API
     * Reference</i>. </p>
     */
    inline ThirdPartySourceRepository& WithConnectionArn(const char* value) { SetConnectionArn(value); return *this;}


    /**
     * <p> The owner of the repository. For a GitHub, GitHub Enterprise, or Bitbucket
     * repository, this is the username for the account that owns the repository. </p>
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }

    /**
     * <p> The owner of the repository. For a GitHub, GitHub Enterprise, or Bitbucket
     * repository, this is the username for the account that owns the repository. </p>
     */
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }

    /**
     * <p> The owner of the repository. For a GitHub, GitHub Enterprise, or Bitbucket
     * repository, this is the username for the account that owns the repository. </p>
     */
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }

    /**
     * <p> The owner of the repository. For a GitHub, GitHub Enterprise, or Bitbucket
     * repository, this is the username for the account that owns the repository. </p>
     */
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }

    /**
     * <p> The owner of the repository. For a GitHub, GitHub Enterprise, or Bitbucket
     * repository, this is the username for the account that owns the repository. </p>
     */
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }

    /**
     * <p> The owner of the repository. For a GitHub, GitHub Enterprise, or Bitbucket
     * repository, this is the username for the account that owns the repository. </p>
     */
    inline ThirdPartySourceRepository& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}

    /**
     * <p> The owner of the repository. For a GitHub, GitHub Enterprise, or Bitbucket
     * repository, this is the username for the account that owns the repository. </p>
     */
    inline ThirdPartySourceRepository& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}

    /**
     * <p> The owner of the repository. For a GitHub, GitHub Enterprise, or Bitbucket
     * repository, this is the username for the account that owns the repository. </p>
     */
    inline ThirdPartySourceRepository& WithOwner(const char* value) { SetOwner(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_connectionArn;
    bool m_connectionArnHasBeenSet;

    Aws::String m_owner;
    bool m_ownerHasBeenSet;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
