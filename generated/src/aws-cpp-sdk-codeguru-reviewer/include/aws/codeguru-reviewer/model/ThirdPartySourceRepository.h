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
   * <p>Information about a third-party source repository connected to CodeGuru
   * Reviewer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/ThirdPartySourceRepository">AWS
   * API Reference</a></p>
   */
  class ThirdPartySourceRepository
  {
  public:
    AWS_CODEGURUREVIEWER_API ThirdPartySourceRepository();
    AWS_CODEGURUREVIEWER_API ThirdPartySourceRepository(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUREVIEWER_API ThirdPartySourceRepository& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUREVIEWER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the third party source repository.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ThirdPartySourceRepository& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ThirdPartySourceRepository& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ThirdPartySourceRepository& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Web Services CodeStar Connections
     * connection. Its format is
     * <code>arn:aws:codestar-connections:region-id:aws-account_id:connection/connection-id</code>.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/codestar-connections/latest/APIReference/API_Connection.html">Connection</a>
     * in the <i>Amazon Web Services CodeStar Connections API Reference</i>.</p>
     */
    inline const Aws::String& GetConnectionArn() const{ return m_connectionArn; }
    inline bool ConnectionArnHasBeenSet() const { return m_connectionArnHasBeenSet; }
    inline void SetConnectionArn(const Aws::String& value) { m_connectionArnHasBeenSet = true; m_connectionArn = value; }
    inline void SetConnectionArn(Aws::String&& value) { m_connectionArnHasBeenSet = true; m_connectionArn = std::move(value); }
    inline void SetConnectionArn(const char* value) { m_connectionArnHasBeenSet = true; m_connectionArn.assign(value); }
    inline ThirdPartySourceRepository& WithConnectionArn(const Aws::String& value) { SetConnectionArn(value); return *this;}
    inline ThirdPartySourceRepository& WithConnectionArn(Aws::String&& value) { SetConnectionArn(std::move(value)); return *this;}
    inline ThirdPartySourceRepository& WithConnectionArn(const char* value) { SetConnectionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner of the repository. For a GitHub, GitHub Enterprise, or Bitbucket
     * repository, this is the username for the account that owns the repository. For
     * an S3 repository, this can be the username or Amazon Web Services account ID
     * </p>
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }
    inline ThirdPartySourceRepository& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}
    inline ThirdPartySourceRepository& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}
    inline ThirdPartySourceRepository& WithOwner(const char* value) { SetOwner(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_connectionArn;
    bool m_connectionArnHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
