/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
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
namespace CodeArtifact
{
namespace Model
{

  /**
   * <p> Details about a repository, including its Amazon Resource Name (ARN),
   * description, and domain information. The <a
   * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_ListRepositories.html">ListRepositories</a>
   * operation returns a list of <code>RepositorySummary</code> objects.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/RepositorySummary">AWS
   * API Reference</a></p>
   */
  class RepositorySummary
  {
  public:
    AWS_CODEARTIFACT_API RepositorySummary();
    AWS_CODEARTIFACT_API RepositorySummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEARTIFACT_API RepositorySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEARTIFACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of the repository. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline RepositorySummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline RepositorySummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline RepositorySummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Web Services account ID that manages the repository. </p>
     */
    inline const Aws::String& GetAdministratorAccount() const{ return m_administratorAccount; }
    inline bool AdministratorAccountHasBeenSet() const { return m_administratorAccountHasBeenSet; }
    inline void SetAdministratorAccount(const Aws::String& value) { m_administratorAccountHasBeenSet = true; m_administratorAccount = value; }
    inline void SetAdministratorAccount(Aws::String&& value) { m_administratorAccountHasBeenSet = true; m_administratorAccount = std::move(value); }
    inline void SetAdministratorAccount(const char* value) { m_administratorAccountHasBeenSet = true; m_administratorAccount.assign(value); }
    inline RepositorySummary& WithAdministratorAccount(const Aws::String& value) { SetAdministratorAccount(value); return *this;}
    inline RepositorySummary& WithAdministratorAccount(Aws::String&& value) { SetAdministratorAccount(std::move(value)); return *this;}
    inline RepositorySummary& WithAdministratorAccount(const char* value) { SetAdministratorAccount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the domain that contains the repository. </p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }
    inline RepositorySummary& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline RepositorySummary& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline RepositorySummary& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline const Aws::String& GetDomainOwner() const{ return m_domainOwner; }
    inline bool DomainOwnerHasBeenSet() const { return m_domainOwnerHasBeenSet; }
    inline void SetDomainOwner(const Aws::String& value) { m_domainOwnerHasBeenSet = true; m_domainOwner = value; }
    inline void SetDomainOwner(Aws::String&& value) { m_domainOwnerHasBeenSet = true; m_domainOwner = std::move(value); }
    inline void SetDomainOwner(const char* value) { m_domainOwnerHasBeenSet = true; m_domainOwner.assign(value); }
    inline RepositorySummary& WithDomainOwner(const Aws::String& value) { SetDomainOwner(value); return *this;}
    inline RepositorySummary& WithDomainOwner(Aws::String&& value) { SetDomainOwner(std::move(value)); return *this;}
    inline RepositorySummary& WithDomainOwner(const char* value) { SetDomainOwner(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN of the repository. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline RepositorySummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline RepositorySummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline RepositorySummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The description of the repository. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline RepositorySummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline RepositorySummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline RepositorySummary& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that represents the date and time the repository was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }
    inline RepositorySummary& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}
    inline RepositorySummary& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_administratorAccount;
    bool m_administratorAccountHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_domainOwner;
    bool m_domainOwnerHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
