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
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace IAM
{
namespace Model
{

  /**
   * <p>Contains information about an IAM role. This structure is returned as a
   * response element in several APIs that interact with roles.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/Role">AWS API
   * Reference</a></p>
   */
  class AWS_IAM_API Role
  {
  public:
    Role();
    Role(const Aws::Utils::Xml::XmlNode& xmlNode);
    Role& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p> The path to the role. For more information about paths, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide. </p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p> The path to the role. For more information about paths, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide. </p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p> The path to the role. For more information about paths, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide. </p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p> The path to the role. For more information about paths, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide. </p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p> The path to the role. For more information about paths, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide. </p>
     */
    inline Role& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p> The path to the role. For more information about paths, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide. </p>
     */
    inline Role& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p> The path to the role. For more information about paths, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide. </p>
     */
    inline Role& WithPath(const char* value) { SetPath(value); return *this;}

    /**
     * <p>The friendly name that identifies the role.</p>
     */
    inline const Aws::String& GetRoleName() const{ return m_roleName; }

    /**
     * <p>The friendly name that identifies the role.</p>
     */
    inline void SetRoleName(const Aws::String& value) { m_roleNameHasBeenSet = true; m_roleName = value; }

    /**
     * <p>The friendly name that identifies the role.</p>
     */
    inline void SetRoleName(Aws::String&& value) { m_roleNameHasBeenSet = true; m_roleName = std::move(value); }

    /**
     * <p>The friendly name that identifies the role.</p>
     */
    inline void SetRoleName(const char* value) { m_roleNameHasBeenSet = true; m_roleName.assign(value); }

    /**
     * <p>The friendly name that identifies the role.</p>
     */
    inline Role& WithRoleName(const Aws::String& value) { SetRoleName(value); return *this;}

    /**
     * <p>The friendly name that identifies the role.</p>
     */
    inline Role& WithRoleName(Aws::String&& value) { SetRoleName(std::move(value)); return *this;}

    /**
     * <p>The friendly name that identifies the role.</p>
     */
    inline Role& WithRoleName(const char* value) { SetRoleName(value); return *this;}

    /**
     * <p> The stable and unique string identifying the role. For more information
     * about IDs, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide. </p>
     */
    inline const Aws::String& GetRoleId() const{ return m_roleId; }

    /**
     * <p> The stable and unique string identifying the role. For more information
     * about IDs, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide. </p>
     */
    inline void SetRoleId(const Aws::String& value) { m_roleIdHasBeenSet = true; m_roleId = value; }

    /**
     * <p> The stable and unique string identifying the role. For more information
     * about IDs, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide. </p>
     */
    inline void SetRoleId(Aws::String&& value) { m_roleIdHasBeenSet = true; m_roleId = std::move(value); }

    /**
     * <p> The stable and unique string identifying the role. For more information
     * about IDs, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide. </p>
     */
    inline void SetRoleId(const char* value) { m_roleIdHasBeenSet = true; m_roleId.assign(value); }

    /**
     * <p> The stable and unique string identifying the role. For more information
     * about IDs, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide. </p>
     */
    inline Role& WithRoleId(const Aws::String& value) { SetRoleId(value); return *this;}

    /**
     * <p> The stable and unique string identifying the role. For more information
     * about IDs, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide. </p>
     */
    inline Role& WithRoleId(Aws::String&& value) { SetRoleId(std::move(value)); return *this;}

    /**
     * <p> The stable and unique string identifying the role. For more information
     * about IDs, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide. </p>
     */
    inline Role& WithRoleId(const char* value) { SetRoleId(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) specifying the role. For more information
     * about ARNs and how to use them in policies, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>IAM User Guide</i> guide. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p> The Amazon Resource Name (ARN) specifying the role. For more information
     * about ARNs and how to use them in policies, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>IAM User Guide</i> guide. </p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) specifying the role. For more information
     * about ARNs and how to use them in policies, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>IAM User Guide</i> guide. </p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) specifying the role. For more information
     * about ARNs and how to use them in policies, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>IAM User Guide</i> guide. </p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) specifying the role. For more information
     * about ARNs and how to use them in policies, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>IAM User Guide</i> guide. </p>
     */
    inline Role& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) specifying the role. For more information
     * about ARNs and how to use them in policies, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>IAM User Guide</i> guide. </p>
     */
    inline Role& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) specifying the role. For more information
     * about ARNs and how to use them in policies, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>IAM User Guide</i> guide. </p>
     */
    inline Role& WithArn(const char* value) { SetArn(value); return *this;}

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the role was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateDate() const{ return m_createDate; }

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the role was created.</p>
     */
    inline void SetCreateDate(const Aws::Utils::DateTime& value) { m_createDateHasBeenSet = true; m_createDate = value; }

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the role was created.</p>
     */
    inline void SetCreateDate(Aws::Utils::DateTime&& value) { m_createDateHasBeenSet = true; m_createDate = std::move(value); }

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the role was created.</p>
     */
    inline Role& WithCreateDate(const Aws::Utils::DateTime& value) { SetCreateDate(value); return *this;}

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the role was created.</p>
     */
    inline Role& WithCreateDate(Aws::Utils::DateTime&& value) { SetCreateDate(std::move(value)); return *this;}

    /**
     * <p>The policy that grants an entity permission to assume the role.</p>
     */
    inline const Aws::String& GetAssumeRolePolicyDocument() const{ return m_assumeRolePolicyDocument; }

    /**
     * <p>The policy that grants an entity permission to assume the role.</p>
     */
    inline void SetAssumeRolePolicyDocument(const Aws::String& value) { m_assumeRolePolicyDocumentHasBeenSet = true; m_assumeRolePolicyDocument = value; }

    /**
     * <p>The policy that grants an entity permission to assume the role.</p>
     */
    inline void SetAssumeRolePolicyDocument(Aws::String&& value) { m_assumeRolePolicyDocumentHasBeenSet = true; m_assumeRolePolicyDocument = std::move(value); }

    /**
     * <p>The policy that grants an entity permission to assume the role.</p>
     */
    inline void SetAssumeRolePolicyDocument(const char* value) { m_assumeRolePolicyDocumentHasBeenSet = true; m_assumeRolePolicyDocument.assign(value); }

    /**
     * <p>The policy that grants an entity permission to assume the role.</p>
     */
    inline Role& WithAssumeRolePolicyDocument(const Aws::String& value) { SetAssumeRolePolicyDocument(value); return *this;}

    /**
     * <p>The policy that grants an entity permission to assume the role.</p>
     */
    inline Role& WithAssumeRolePolicyDocument(Aws::String&& value) { SetAssumeRolePolicyDocument(std::move(value)); return *this;}

    /**
     * <p>The policy that grants an entity permission to assume the role.</p>
     */
    inline Role& WithAssumeRolePolicyDocument(const char* value) { SetAssumeRolePolicyDocument(value); return *this;}

    /**
     * <p>A description of the role that you provide.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the role that you provide.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the role that you provide.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the role that you provide.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the role that you provide.</p>
     */
    inline Role& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the role that you provide.</p>
     */
    inline Role& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the role that you provide.</p>
     */
    inline Role& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:
    Aws::String m_path;
    bool m_pathHasBeenSet;
    Aws::String m_roleName;
    bool m_roleNameHasBeenSet;
    Aws::String m_roleId;
    bool m_roleIdHasBeenSet;
    Aws::String m_arn;
    bool m_arnHasBeenSet;
    Aws::Utils::DateTime m_createDate;
    bool m_createDateHasBeenSet;
    Aws::String m_assumeRolePolicyDocument;
    bool m_assumeRolePolicyDocumentHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
