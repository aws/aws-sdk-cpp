/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/S3Path.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>User accounts whose documents should be indexed.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/OneDriveUsers">AWS
   * API Reference</a></p>
   */
  class OneDriveUsers
  {
  public:
    AWS_KENDRA_API OneDriveUsers();
    AWS_KENDRA_API OneDriveUsers(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API OneDriveUsers& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of users whose documents should be indexed. Specify the user names in
     * email format, for example, <code>username@tenantdomain</code>. If you need to
     * index the documents of more than 100 users, use the
     * <code>OneDriveUserS3Path</code> field to specify the location of a file
     * containing a list of users.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOneDriveUserList() const{ return m_oneDriveUserList; }

    /**
     * <p>A list of users whose documents should be indexed. Specify the user names in
     * email format, for example, <code>username@tenantdomain</code>. If you need to
     * index the documents of more than 100 users, use the
     * <code>OneDriveUserS3Path</code> field to specify the location of a file
     * containing a list of users.</p>
     */
    inline bool OneDriveUserListHasBeenSet() const { return m_oneDriveUserListHasBeenSet; }

    /**
     * <p>A list of users whose documents should be indexed. Specify the user names in
     * email format, for example, <code>username@tenantdomain</code>. If you need to
     * index the documents of more than 100 users, use the
     * <code>OneDriveUserS3Path</code> field to specify the location of a file
     * containing a list of users.</p>
     */
    inline void SetOneDriveUserList(const Aws::Vector<Aws::String>& value) { m_oneDriveUserListHasBeenSet = true; m_oneDriveUserList = value; }

    /**
     * <p>A list of users whose documents should be indexed. Specify the user names in
     * email format, for example, <code>username@tenantdomain</code>. If you need to
     * index the documents of more than 100 users, use the
     * <code>OneDriveUserS3Path</code> field to specify the location of a file
     * containing a list of users.</p>
     */
    inline void SetOneDriveUserList(Aws::Vector<Aws::String>&& value) { m_oneDriveUserListHasBeenSet = true; m_oneDriveUserList = std::move(value); }

    /**
     * <p>A list of users whose documents should be indexed. Specify the user names in
     * email format, for example, <code>username@tenantdomain</code>. If you need to
     * index the documents of more than 100 users, use the
     * <code>OneDriveUserS3Path</code> field to specify the location of a file
     * containing a list of users.</p>
     */
    inline OneDriveUsers& WithOneDriveUserList(const Aws::Vector<Aws::String>& value) { SetOneDriveUserList(value); return *this;}

    /**
     * <p>A list of users whose documents should be indexed. Specify the user names in
     * email format, for example, <code>username@tenantdomain</code>. If you need to
     * index the documents of more than 100 users, use the
     * <code>OneDriveUserS3Path</code> field to specify the location of a file
     * containing a list of users.</p>
     */
    inline OneDriveUsers& WithOneDriveUserList(Aws::Vector<Aws::String>&& value) { SetOneDriveUserList(std::move(value)); return *this;}

    /**
     * <p>A list of users whose documents should be indexed. Specify the user names in
     * email format, for example, <code>username@tenantdomain</code>. If you need to
     * index the documents of more than 100 users, use the
     * <code>OneDriveUserS3Path</code> field to specify the location of a file
     * containing a list of users.</p>
     */
    inline OneDriveUsers& AddOneDriveUserList(const Aws::String& value) { m_oneDriveUserListHasBeenSet = true; m_oneDriveUserList.push_back(value); return *this; }

    /**
     * <p>A list of users whose documents should be indexed. Specify the user names in
     * email format, for example, <code>username@tenantdomain</code>. If you need to
     * index the documents of more than 100 users, use the
     * <code>OneDriveUserS3Path</code> field to specify the location of a file
     * containing a list of users.</p>
     */
    inline OneDriveUsers& AddOneDriveUserList(Aws::String&& value) { m_oneDriveUserListHasBeenSet = true; m_oneDriveUserList.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of users whose documents should be indexed. Specify the user names in
     * email format, for example, <code>username@tenantdomain</code>. If you need to
     * index the documents of more than 100 users, use the
     * <code>OneDriveUserS3Path</code> field to specify the location of a file
     * containing a list of users.</p>
     */
    inline OneDriveUsers& AddOneDriveUserList(const char* value) { m_oneDriveUserListHasBeenSet = true; m_oneDriveUserList.push_back(value); return *this; }


    /**
     * <p>The S3 bucket location of a file containing a list of users whose documents
     * should be indexed.</p>
     */
    inline const S3Path& GetOneDriveUserS3Path() const{ return m_oneDriveUserS3Path; }

    /**
     * <p>The S3 bucket location of a file containing a list of users whose documents
     * should be indexed.</p>
     */
    inline bool OneDriveUserS3PathHasBeenSet() const { return m_oneDriveUserS3PathHasBeenSet; }

    /**
     * <p>The S3 bucket location of a file containing a list of users whose documents
     * should be indexed.</p>
     */
    inline void SetOneDriveUserS3Path(const S3Path& value) { m_oneDriveUserS3PathHasBeenSet = true; m_oneDriveUserS3Path = value; }

    /**
     * <p>The S3 bucket location of a file containing a list of users whose documents
     * should be indexed.</p>
     */
    inline void SetOneDriveUserS3Path(S3Path&& value) { m_oneDriveUserS3PathHasBeenSet = true; m_oneDriveUserS3Path = std::move(value); }

    /**
     * <p>The S3 bucket location of a file containing a list of users whose documents
     * should be indexed.</p>
     */
    inline OneDriveUsers& WithOneDriveUserS3Path(const S3Path& value) { SetOneDriveUserS3Path(value); return *this;}

    /**
     * <p>The S3 bucket location of a file containing a list of users whose documents
     * should be indexed.</p>
     */
    inline OneDriveUsers& WithOneDriveUserS3Path(S3Path&& value) { SetOneDriveUserS3Path(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_oneDriveUserList;
    bool m_oneDriveUserListHasBeenSet = false;

    S3Path m_oneDriveUserS3Path;
    bool m_oneDriveUserS3PathHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
