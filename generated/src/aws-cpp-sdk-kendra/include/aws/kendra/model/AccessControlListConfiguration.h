/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
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
   * <p>Access Control List files for the documents in a data source. For the format
   * of the file, see <a
   * href="https://docs.aws.amazon.com/kendra/latest/dg/s3-acl.html">Access control
   * for S3 data sources</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/AccessControlListConfiguration">AWS
   * API Reference</a></p>
   */
  class AccessControlListConfiguration
  {
  public:
    AWS_KENDRA_API AccessControlListConfiguration() = default;
    AWS_KENDRA_API AccessControlListConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API AccessControlListConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Path to the Amazon S3 bucket that contains the ACL files.</p>
     */
    inline const Aws::String& GetKeyPath() const { return m_keyPath; }
    inline bool KeyPathHasBeenSet() const { return m_keyPathHasBeenSet; }
    template<typename KeyPathT = Aws::String>
    void SetKeyPath(KeyPathT&& value) { m_keyPathHasBeenSet = true; m_keyPath = std::forward<KeyPathT>(value); }
    template<typename KeyPathT = Aws::String>
    AccessControlListConfiguration& WithKeyPath(KeyPathT&& value) { SetKeyPath(std::forward<KeyPathT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_keyPath;
    bool m_keyPathHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
