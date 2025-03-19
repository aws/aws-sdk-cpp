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
   * <p>An object that represents the secret to expose to your container. Secrets can
   * be exposed to a container in the following ways:</p> <ul> <li> <p>To inject
   * sensitive data into your containers as environment variables, use the
   * <code>secrets</code> container definition parameter.</p> </li> <li> <p>To
   * reference sensitive information in the log configuration of a container, use the
   * <code>secretOptions</code> container definition parameter.</p> </li> </ul>
   * <p>For more information, see <a
   * href="https://docs.aws.amazon.com/batch/latest/userguide/specifying-sensitive-data.html">Specifying
   * sensitive data</a> in the <i>Batch User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/Secret">AWS API
   * Reference</a></p>
   */
  class Secret
  {
  public:
    AWS_BATCH_API Secret() = default;
    AWS_BATCH_API Secret(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Secret& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the secret.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Secret& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The secret to expose to the container. The supported values are either the
     * full Amazon Resource Name (ARN) of the Secrets Manager secret or the full ARN of
     * the parameter in the Amazon Web Services Systems Manager Parameter Store.</p>
     *  <p>If the Amazon Web Services Systems Manager Parameter Store parameter
     * exists in the same Region as the job you're launching, then you can use either
     * the full Amazon Resource Name (ARN) or name of the parameter. If the parameter
     * exists in a different Region, then the full ARN must be specified.</p> 
     */
    inline const Aws::String& GetValueFrom() const { return m_valueFrom; }
    inline bool ValueFromHasBeenSet() const { return m_valueFromHasBeenSet; }
    template<typename ValueFromT = Aws::String>
    void SetValueFrom(ValueFromT&& value) { m_valueFromHasBeenSet = true; m_valueFrom = std::forward<ValueFromT>(value); }
    template<typename ValueFromT = Aws::String>
    Secret& WithValueFrom(ValueFromT&& value) { SetValueFrom(std::forward<ValueFromT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_valueFrom;
    bool m_valueFromHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
