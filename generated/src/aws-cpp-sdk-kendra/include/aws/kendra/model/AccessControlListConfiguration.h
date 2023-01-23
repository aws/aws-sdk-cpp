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
    AWS_KENDRA_API AccessControlListConfiguration();
    AWS_KENDRA_API AccessControlListConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API AccessControlListConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Path to the Amazon S3 bucket that contains the ACL files.</p>
     */
    inline const Aws::String& GetKeyPath() const{ return m_keyPath; }

    /**
     * <p>Path to the Amazon S3 bucket that contains the ACL files.</p>
     */
    inline bool KeyPathHasBeenSet() const { return m_keyPathHasBeenSet; }

    /**
     * <p>Path to the Amazon S3 bucket that contains the ACL files.</p>
     */
    inline void SetKeyPath(const Aws::String& value) { m_keyPathHasBeenSet = true; m_keyPath = value; }

    /**
     * <p>Path to the Amazon S3 bucket that contains the ACL files.</p>
     */
    inline void SetKeyPath(Aws::String&& value) { m_keyPathHasBeenSet = true; m_keyPath = std::move(value); }

    /**
     * <p>Path to the Amazon S3 bucket that contains the ACL files.</p>
     */
    inline void SetKeyPath(const char* value) { m_keyPathHasBeenSet = true; m_keyPath.assign(value); }

    /**
     * <p>Path to the Amazon S3 bucket that contains the ACL files.</p>
     */
    inline AccessControlListConfiguration& WithKeyPath(const Aws::String& value) { SetKeyPath(value); return *this;}

    /**
     * <p>Path to the Amazon S3 bucket that contains the ACL files.</p>
     */
    inline AccessControlListConfiguration& WithKeyPath(Aws::String&& value) { SetKeyPath(std::move(value)); return *this;}

    /**
     * <p>Path to the Amazon S3 bucket that contains the ACL files.</p>
     */
    inline AccessControlListConfiguration& WithKeyPath(const char* value) { SetKeyPath(value); return *this;}

  private:

    Aws::String m_keyPath;
    bool m_keyPathHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
