/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
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
namespace ECS
{
namespace Model
{

  /**
   * <p>An object representing the secret to expose to your container. Secrets can be
   * exposed to a container in the following ways:</p> <ul> <li> <p>To inject
   * sensitive data into your containers as environment variables, use the
   * <code>secrets</code> container definition parameter.</p> </li> <li> <p>To
   * reference sensitive information in the log configuration of a container, use the
   * <code>secretOptions</code> container definition parameter.</p> </li> </ul>
   * <p>For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/specifying-sensitive-data.html">Specifying
   * sensitive data</a> in the <i>Amazon Elastic Container Service Developer
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/Secret">AWS API
   * Reference</a></p>
   */
  class Secret
  {
  public:
    AWS_ECS_API Secret();
    AWS_ECS_API Secret(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Secret& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the secret.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the secret.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the secret.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the secret.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the secret.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the secret.</p>
     */
    inline Secret& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the secret.</p>
     */
    inline Secret& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the secret.</p>
     */
    inline Secret& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The secret to expose to the container. The supported values are either the
     * full ARN of the Secrets Manager secret or the full ARN of the parameter in the
     * SSM Parameter Store.</p> <p>For information about the require Identity and
     * Access Management permissions, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/specifying-sensitive-data-secrets.html#secrets-iam">Required
     * IAM permissions for Amazon ECS secrets</a> (for Secrets Manager) or <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/specifying-sensitive-data-parameters.html">Required
     * IAM permissions for Amazon ECS secrets</a> (for Systems Manager Parameter store)
     * in the <i>Amazon Elastic Container Service Developer Guide</i>.</p>  <p>If
     * the SSM Parameter Store parameter exists in the same Region as the task you're
     * launching, then you can use either the full ARN or name of the parameter. If the
     * parameter exists in a different Region, then the full ARN must be specified.</p>
     * 
     */
    inline const Aws::String& GetValueFrom() const{ return m_valueFrom; }

    /**
     * <p>The secret to expose to the container. The supported values are either the
     * full ARN of the Secrets Manager secret or the full ARN of the parameter in the
     * SSM Parameter Store.</p> <p>For information about the require Identity and
     * Access Management permissions, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/specifying-sensitive-data-secrets.html#secrets-iam">Required
     * IAM permissions for Amazon ECS secrets</a> (for Secrets Manager) or <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/specifying-sensitive-data-parameters.html">Required
     * IAM permissions for Amazon ECS secrets</a> (for Systems Manager Parameter store)
     * in the <i>Amazon Elastic Container Service Developer Guide</i>.</p>  <p>If
     * the SSM Parameter Store parameter exists in the same Region as the task you're
     * launching, then you can use either the full ARN or name of the parameter. If the
     * parameter exists in a different Region, then the full ARN must be specified.</p>
     * 
     */
    inline bool ValueFromHasBeenSet() const { return m_valueFromHasBeenSet; }

    /**
     * <p>The secret to expose to the container. The supported values are either the
     * full ARN of the Secrets Manager secret or the full ARN of the parameter in the
     * SSM Parameter Store.</p> <p>For information about the require Identity and
     * Access Management permissions, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/specifying-sensitive-data-secrets.html#secrets-iam">Required
     * IAM permissions for Amazon ECS secrets</a> (for Secrets Manager) or <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/specifying-sensitive-data-parameters.html">Required
     * IAM permissions for Amazon ECS secrets</a> (for Systems Manager Parameter store)
     * in the <i>Amazon Elastic Container Service Developer Guide</i>.</p>  <p>If
     * the SSM Parameter Store parameter exists in the same Region as the task you're
     * launching, then you can use either the full ARN or name of the parameter. If the
     * parameter exists in a different Region, then the full ARN must be specified.</p>
     * 
     */
    inline void SetValueFrom(const Aws::String& value) { m_valueFromHasBeenSet = true; m_valueFrom = value; }

    /**
     * <p>The secret to expose to the container. The supported values are either the
     * full ARN of the Secrets Manager secret or the full ARN of the parameter in the
     * SSM Parameter Store.</p> <p>For information about the require Identity and
     * Access Management permissions, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/specifying-sensitive-data-secrets.html#secrets-iam">Required
     * IAM permissions for Amazon ECS secrets</a> (for Secrets Manager) or <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/specifying-sensitive-data-parameters.html">Required
     * IAM permissions for Amazon ECS secrets</a> (for Systems Manager Parameter store)
     * in the <i>Amazon Elastic Container Service Developer Guide</i>.</p>  <p>If
     * the SSM Parameter Store parameter exists in the same Region as the task you're
     * launching, then you can use either the full ARN or name of the parameter. If the
     * parameter exists in a different Region, then the full ARN must be specified.</p>
     * 
     */
    inline void SetValueFrom(Aws::String&& value) { m_valueFromHasBeenSet = true; m_valueFrom = std::move(value); }

    /**
     * <p>The secret to expose to the container. The supported values are either the
     * full ARN of the Secrets Manager secret or the full ARN of the parameter in the
     * SSM Parameter Store.</p> <p>For information about the require Identity and
     * Access Management permissions, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/specifying-sensitive-data-secrets.html#secrets-iam">Required
     * IAM permissions for Amazon ECS secrets</a> (for Secrets Manager) or <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/specifying-sensitive-data-parameters.html">Required
     * IAM permissions for Amazon ECS secrets</a> (for Systems Manager Parameter store)
     * in the <i>Amazon Elastic Container Service Developer Guide</i>.</p>  <p>If
     * the SSM Parameter Store parameter exists in the same Region as the task you're
     * launching, then you can use either the full ARN or name of the parameter. If the
     * parameter exists in a different Region, then the full ARN must be specified.</p>
     * 
     */
    inline void SetValueFrom(const char* value) { m_valueFromHasBeenSet = true; m_valueFrom.assign(value); }

    /**
     * <p>The secret to expose to the container. The supported values are either the
     * full ARN of the Secrets Manager secret or the full ARN of the parameter in the
     * SSM Parameter Store.</p> <p>For information about the require Identity and
     * Access Management permissions, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/specifying-sensitive-data-secrets.html#secrets-iam">Required
     * IAM permissions for Amazon ECS secrets</a> (for Secrets Manager) or <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/specifying-sensitive-data-parameters.html">Required
     * IAM permissions for Amazon ECS secrets</a> (for Systems Manager Parameter store)
     * in the <i>Amazon Elastic Container Service Developer Guide</i>.</p>  <p>If
     * the SSM Parameter Store parameter exists in the same Region as the task you're
     * launching, then you can use either the full ARN or name of the parameter. If the
     * parameter exists in a different Region, then the full ARN must be specified.</p>
     * 
     */
    inline Secret& WithValueFrom(const Aws::String& value) { SetValueFrom(value); return *this;}

    /**
     * <p>The secret to expose to the container. The supported values are either the
     * full ARN of the Secrets Manager secret or the full ARN of the parameter in the
     * SSM Parameter Store.</p> <p>For information about the require Identity and
     * Access Management permissions, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/specifying-sensitive-data-secrets.html#secrets-iam">Required
     * IAM permissions for Amazon ECS secrets</a> (for Secrets Manager) or <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/specifying-sensitive-data-parameters.html">Required
     * IAM permissions for Amazon ECS secrets</a> (for Systems Manager Parameter store)
     * in the <i>Amazon Elastic Container Service Developer Guide</i>.</p>  <p>If
     * the SSM Parameter Store parameter exists in the same Region as the task you're
     * launching, then you can use either the full ARN or name of the parameter. If the
     * parameter exists in a different Region, then the full ARN must be specified.</p>
     * 
     */
    inline Secret& WithValueFrom(Aws::String&& value) { SetValueFrom(std::move(value)); return *this;}

    /**
     * <p>The secret to expose to the container. The supported values are either the
     * full ARN of the Secrets Manager secret or the full ARN of the parameter in the
     * SSM Parameter Store.</p> <p>For information about the require Identity and
     * Access Management permissions, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/specifying-sensitive-data-secrets.html#secrets-iam">Required
     * IAM permissions for Amazon ECS secrets</a> (for Secrets Manager) or <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/specifying-sensitive-data-parameters.html">Required
     * IAM permissions for Amazon ECS secrets</a> (for Systems Manager Parameter store)
     * in the <i>Amazon Elastic Container Service Developer Guide</i>.</p>  <p>If
     * the SSM Parameter Store parameter exists in the same Region as the task you're
     * launching, then you can use either the full ARN or name of the parameter. If the
     * parameter exists in a different Region, then the full ARN must be specified.</p>
     * 
     */
    inline Secret& WithValueFrom(const char* value) { SetValueFrom(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_valueFrom;
    bool m_valueFromHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
