/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
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
namespace Batch
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
   * Sensitive Data</a> in the <i>Amazon Elastic Container Service Developer
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/Secret">AWS API
   * Reference</a></p>
   */
  class AWS_BATCH_API Secret
  {
  public:
    Secret();
    Secret(Aws::Utils::Json::JsonView jsonValue);
    Secret& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
     * full ARN of the AWS Secrets Manager secret or the full ARN of the parameter in
     * the AWS Systems Manager Parameter Store.</p>  <p>If the AWS Systems
     * Manager Parameter Store parameter exists in the same Region as the task you are
     * launching, then you can use either the full ARN or name of the parameter. If the
     * parameter exists in a different Region, then the full ARN must be specified.</p>
     * 
     */
    inline const Aws::String& GetValueFrom() const{ return m_valueFrom; }

    /**
     * <p>The secret to expose to the container. The supported values are either the
     * full ARN of the AWS Secrets Manager secret or the full ARN of the parameter in
     * the AWS Systems Manager Parameter Store.</p>  <p>If the AWS Systems
     * Manager Parameter Store parameter exists in the same Region as the task you are
     * launching, then you can use either the full ARN or name of the parameter. If the
     * parameter exists in a different Region, then the full ARN must be specified.</p>
     * 
     */
    inline bool ValueFromHasBeenSet() const { return m_valueFromHasBeenSet; }

    /**
     * <p>The secret to expose to the container. The supported values are either the
     * full ARN of the AWS Secrets Manager secret or the full ARN of the parameter in
     * the AWS Systems Manager Parameter Store.</p>  <p>If the AWS Systems
     * Manager Parameter Store parameter exists in the same Region as the task you are
     * launching, then you can use either the full ARN or name of the parameter. If the
     * parameter exists in a different Region, then the full ARN must be specified.</p>
     * 
     */
    inline void SetValueFrom(const Aws::String& value) { m_valueFromHasBeenSet = true; m_valueFrom = value; }

    /**
     * <p>The secret to expose to the container. The supported values are either the
     * full ARN of the AWS Secrets Manager secret or the full ARN of the parameter in
     * the AWS Systems Manager Parameter Store.</p>  <p>If the AWS Systems
     * Manager Parameter Store parameter exists in the same Region as the task you are
     * launching, then you can use either the full ARN or name of the parameter. If the
     * parameter exists in a different Region, then the full ARN must be specified.</p>
     * 
     */
    inline void SetValueFrom(Aws::String&& value) { m_valueFromHasBeenSet = true; m_valueFrom = std::move(value); }

    /**
     * <p>The secret to expose to the container. The supported values are either the
     * full ARN of the AWS Secrets Manager secret or the full ARN of the parameter in
     * the AWS Systems Manager Parameter Store.</p>  <p>If the AWS Systems
     * Manager Parameter Store parameter exists in the same Region as the task you are
     * launching, then you can use either the full ARN or name of the parameter. If the
     * parameter exists in a different Region, then the full ARN must be specified.</p>
     * 
     */
    inline void SetValueFrom(const char* value) { m_valueFromHasBeenSet = true; m_valueFrom.assign(value); }

    /**
     * <p>The secret to expose to the container. The supported values are either the
     * full ARN of the AWS Secrets Manager secret or the full ARN of the parameter in
     * the AWS Systems Manager Parameter Store.</p>  <p>If the AWS Systems
     * Manager Parameter Store parameter exists in the same Region as the task you are
     * launching, then you can use either the full ARN or name of the parameter. If the
     * parameter exists in a different Region, then the full ARN must be specified.</p>
     * 
     */
    inline Secret& WithValueFrom(const Aws::String& value) { SetValueFrom(value); return *this;}

    /**
     * <p>The secret to expose to the container. The supported values are either the
     * full ARN of the AWS Secrets Manager secret or the full ARN of the parameter in
     * the AWS Systems Manager Parameter Store.</p>  <p>If the AWS Systems
     * Manager Parameter Store parameter exists in the same Region as the task you are
     * launching, then you can use either the full ARN or name of the parameter. If the
     * parameter exists in a different Region, then the full ARN must be specified.</p>
     * 
     */
    inline Secret& WithValueFrom(Aws::String&& value) { SetValueFrom(std::move(value)); return *this;}

    /**
     * <p>The secret to expose to the container. The supported values are either the
     * full ARN of the AWS Secrets Manager secret or the full ARN of the parameter in
     * the AWS Systems Manager Parameter Store.</p>  <p>If the AWS Systems
     * Manager Parameter Store parameter exists in the same Region as the task you are
     * launching, then you can use either the full ARN or name of the parameter. If the
     * parameter exists in a different Region, then the full ARN must be specified.</p>
     * 
     */
    inline Secret& WithValueFrom(const char* value) { SetValueFrom(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_valueFrom;
    bool m_valueFromHasBeenSet;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
