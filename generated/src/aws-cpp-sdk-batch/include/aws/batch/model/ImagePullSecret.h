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
   * <p>References a Kubernetes secret resource. This name of the secret must start
   * and end with an alphanumeric character, is required to be lowercase, can include
   * periods (.) and hyphens (-), and can't contain more than 253
   * characters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/ImagePullSecret">AWS
   * API Reference</a></p>
   */
  class ImagePullSecret
  {
  public:
    AWS_BATCH_API ImagePullSecret() = default;
    AWS_BATCH_API ImagePullSecret(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API ImagePullSecret& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Provides a unique identifier for the <code>ImagePullSecret</code>. This
     * object is required when <code>EksPodProperties$imagePullSecrets</code> is
     * used.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ImagePullSecret& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
