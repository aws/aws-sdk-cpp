/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr-public/ECRPublic_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecr-public/model/RegistryAliasStatus.h>
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
namespace ECRPublic
{
namespace Model
{

  /**
   * <p>An object representing the aliases for a public registry. A public registry
   * is given an alias upon creation but a custom alias can be set using the Amazon
   * ECR console. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonECR/latest/userguide/Registries.html">Registries</a>
   * in the <i>Amazon Elastic Container Registry User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/RegistryAlias">AWS
   * API Reference</a></p>
   */
  class RegistryAlias
  {
  public:
    AWS_ECRPUBLIC_API RegistryAlias();
    AWS_ECRPUBLIC_API RegistryAlias(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECRPUBLIC_API RegistryAlias& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECRPUBLIC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the registry alias.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the registry alias.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the registry alias.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the registry alias.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the registry alias.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the registry alias.</p>
     */
    inline RegistryAlias& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the registry alias.</p>
     */
    inline RegistryAlias& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the registry alias.</p>
     */
    inline RegistryAlias& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The status of the registry alias.</p>
     */
    inline const RegistryAliasStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the registry alias.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the registry alias.</p>
     */
    inline void SetStatus(const RegistryAliasStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the registry alias.</p>
     */
    inline void SetStatus(RegistryAliasStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the registry alias.</p>
     */
    inline RegistryAlias& WithStatus(const RegistryAliasStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the registry alias.</p>
     */
    inline RegistryAlias& WithStatus(RegistryAliasStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Whether or not the registry alias is the primary alias for the registry. If
     * true, the alias is the primary registry alias and is displayed in both the
     * repository URL and the image URI used in the <code>docker pull</code> commands
     * on the Amazon ECR Public Gallery.</p>  <p>A registry alias that is not the
     * primary registry alias can be used in the repository URI in a <code>docker
     * pull</code> command.</p> 
     */
    inline bool GetPrimaryRegistryAlias() const{ return m_primaryRegistryAlias; }

    /**
     * <p>Whether or not the registry alias is the primary alias for the registry. If
     * true, the alias is the primary registry alias and is displayed in both the
     * repository URL and the image URI used in the <code>docker pull</code> commands
     * on the Amazon ECR Public Gallery.</p>  <p>A registry alias that is not the
     * primary registry alias can be used in the repository URI in a <code>docker
     * pull</code> command.</p> 
     */
    inline bool PrimaryRegistryAliasHasBeenSet() const { return m_primaryRegistryAliasHasBeenSet; }

    /**
     * <p>Whether or not the registry alias is the primary alias for the registry. If
     * true, the alias is the primary registry alias and is displayed in both the
     * repository URL and the image URI used in the <code>docker pull</code> commands
     * on the Amazon ECR Public Gallery.</p>  <p>A registry alias that is not the
     * primary registry alias can be used in the repository URI in a <code>docker
     * pull</code> command.</p> 
     */
    inline void SetPrimaryRegistryAlias(bool value) { m_primaryRegistryAliasHasBeenSet = true; m_primaryRegistryAlias = value; }

    /**
     * <p>Whether or not the registry alias is the primary alias for the registry. If
     * true, the alias is the primary registry alias and is displayed in both the
     * repository URL and the image URI used in the <code>docker pull</code> commands
     * on the Amazon ECR Public Gallery.</p>  <p>A registry alias that is not the
     * primary registry alias can be used in the repository URI in a <code>docker
     * pull</code> command.</p> 
     */
    inline RegistryAlias& WithPrimaryRegistryAlias(bool value) { SetPrimaryRegistryAlias(value); return *this;}


    /**
     * <p>Whether or not the registry alias is the default alias for the registry. When
     * the first public repository is created, your public registry is assigned a
     * default registry alias.</p>
     */
    inline bool GetDefaultRegistryAlias() const{ return m_defaultRegistryAlias; }

    /**
     * <p>Whether or not the registry alias is the default alias for the registry. When
     * the first public repository is created, your public registry is assigned a
     * default registry alias.</p>
     */
    inline bool DefaultRegistryAliasHasBeenSet() const { return m_defaultRegistryAliasHasBeenSet; }

    /**
     * <p>Whether or not the registry alias is the default alias for the registry. When
     * the first public repository is created, your public registry is assigned a
     * default registry alias.</p>
     */
    inline void SetDefaultRegistryAlias(bool value) { m_defaultRegistryAliasHasBeenSet = true; m_defaultRegistryAlias = value; }

    /**
     * <p>Whether or not the registry alias is the default alias for the registry. When
     * the first public repository is created, your public registry is assigned a
     * default registry alias.</p>
     */
    inline RegistryAlias& WithDefaultRegistryAlias(bool value) { SetDefaultRegistryAlias(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    RegistryAliasStatus m_status;
    bool m_statusHasBeenSet = false;

    bool m_primaryRegistryAlias;
    bool m_primaryRegistryAliasHasBeenSet = false;

    bool m_defaultRegistryAlias;
    bool m_defaultRegistryAliasHasBeenSet = false;
  };

} // namespace Model
} // namespace ECRPublic
} // namespace Aws
