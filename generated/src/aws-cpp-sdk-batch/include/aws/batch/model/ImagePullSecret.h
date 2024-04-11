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
    AWS_BATCH_API ImagePullSecret();
    AWS_BATCH_API ImagePullSecret(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API ImagePullSecret& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Provides a unique identifier for the <code>ImagePullSecret</code>. This
     * object is required when <code>EksPodProperties$imagePullSecrets</code> is
     * used.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Provides a unique identifier for the <code>ImagePullSecret</code>. This
     * object is required when <code>EksPodProperties$imagePullSecrets</code> is
     * used.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Provides a unique identifier for the <code>ImagePullSecret</code>. This
     * object is required when <code>EksPodProperties$imagePullSecrets</code> is
     * used.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Provides a unique identifier for the <code>ImagePullSecret</code>. This
     * object is required when <code>EksPodProperties$imagePullSecrets</code> is
     * used.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Provides a unique identifier for the <code>ImagePullSecret</code>. This
     * object is required when <code>EksPodProperties$imagePullSecrets</code> is
     * used.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Provides a unique identifier for the <code>ImagePullSecret</code>. This
     * object is required when <code>EksPodProperties$imagePullSecrets</code> is
     * used.</p>
     */
    inline ImagePullSecret& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Provides a unique identifier for the <code>ImagePullSecret</code>. This
     * object is required when <code>EksPodProperties$imagePullSecrets</code> is
     * used.</p>
     */
    inline ImagePullSecret& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Provides a unique identifier for the <code>ImagePullSecret</code>. This
     * object is required when <code>EksPodProperties$imagePullSecrets</code> is
     * used.</p>
     */
    inline ImagePullSecret& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
