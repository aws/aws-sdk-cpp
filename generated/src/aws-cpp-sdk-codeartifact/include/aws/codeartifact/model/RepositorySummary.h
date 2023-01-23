/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
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


    /**
     * <p> The name of the repository. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name of the repository. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The name of the repository. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The name of the repository. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The name of the repository. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The name of the repository. </p>
     */
    inline RepositorySummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of the repository. </p>
     */
    inline RepositorySummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of the repository. </p>
     */
    inline RepositorySummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> The Amazon Web Services account ID that manages the repository. </p>
     */
    inline const Aws::String& GetAdministratorAccount() const{ return m_administratorAccount; }

    /**
     * <p> The Amazon Web Services account ID that manages the repository. </p>
     */
    inline bool AdministratorAccountHasBeenSet() const { return m_administratorAccountHasBeenSet; }

    /**
     * <p> The Amazon Web Services account ID that manages the repository. </p>
     */
    inline void SetAdministratorAccount(const Aws::String& value) { m_administratorAccountHasBeenSet = true; m_administratorAccount = value; }

    /**
     * <p> The Amazon Web Services account ID that manages the repository. </p>
     */
    inline void SetAdministratorAccount(Aws::String&& value) { m_administratorAccountHasBeenSet = true; m_administratorAccount = std::move(value); }

    /**
     * <p> The Amazon Web Services account ID that manages the repository. </p>
     */
    inline void SetAdministratorAccount(const char* value) { m_administratorAccountHasBeenSet = true; m_administratorAccount.assign(value); }

    /**
     * <p> The Amazon Web Services account ID that manages the repository. </p>
     */
    inline RepositorySummary& WithAdministratorAccount(const Aws::String& value) { SetAdministratorAccount(value); return *this;}

    /**
     * <p> The Amazon Web Services account ID that manages the repository. </p>
     */
    inline RepositorySummary& WithAdministratorAccount(Aws::String&& value) { SetAdministratorAccount(std::move(value)); return *this;}

    /**
     * <p> The Amazon Web Services account ID that manages the repository. </p>
     */
    inline RepositorySummary& WithAdministratorAccount(const char* value) { SetAdministratorAccount(value); return *this;}


    /**
     * <p> The name of the domain that contains the repository. </p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p> The name of the domain that contains the repository. </p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p> The name of the domain that contains the repository. </p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p> The name of the domain that contains the repository. </p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p> The name of the domain that contains the repository. </p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p> The name of the domain that contains the repository. </p>
     */
    inline RepositorySummary& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p> The name of the domain that contains the repository. </p>
     */
    inline RepositorySummary& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p> The name of the domain that contains the repository. </p>
     */
    inline RepositorySummary& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline const Aws::String& GetDomainOwner() const{ return m_domainOwner; }

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline bool DomainOwnerHasBeenSet() const { return m_domainOwnerHasBeenSet; }

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline void SetDomainOwner(const Aws::String& value) { m_domainOwnerHasBeenSet = true; m_domainOwner = value; }

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline void SetDomainOwner(Aws::String&& value) { m_domainOwnerHasBeenSet = true; m_domainOwner = std::move(value); }

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline void SetDomainOwner(const char* value) { m_domainOwnerHasBeenSet = true; m_domainOwner.assign(value); }

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline RepositorySummary& WithDomainOwner(const Aws::String& value) { SetDomainOwner(value); return *this;}

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline RepositorySummary& WithDomainOwner(Aws::String&& value) { SetDomainOwner(std::move(value)); return *this;}

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline RepositorySummary& WithDomainOwner(const char* value) { SetDomainOwner(value); return *this;}


    /**
     * <p> The ARN of the repository. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p> The ARN of the repository. </p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p> The ARN of the repository. </p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p> The ARN of the repository. </p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p> The ARN of the repository. </p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p> The ARN of the repository. </p>
     */
    inline RepositorySummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p> The ARN of the repository. </p>
     */
    inline RepositorySummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p> The ARN of the repository. </p>
     */
    inline RepositorySummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p> The description of the repository. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> The description of the repository. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p> The description of the repository. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p> The description of the repository. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p> The description of the repository. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p> The description of the repository. </p>
     */
    inline RepositorySummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> The description of the repository. </p>
     */
    inline RepositorySummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> The description of the repository. </p>
     */
    inline RepositorySummary& WithDescription(const char* value) { SetDescription(value); return *this;}

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
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
