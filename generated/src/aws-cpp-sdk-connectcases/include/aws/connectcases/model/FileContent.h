/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
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
namespace ConnectCases
{
namespace Model
{

  /**
   * <p>An object that represents a content of an Amazon Connect file
   * object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/FileContent">AWS
   * API Reference</a></p>
   */
  class FileContent
  {
  public:
    AWS_CONNECTCASES_API FileContent();
    AWS_CONNECTCASES_API FileContent(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API FileContent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of a File in Amazon Connect.</p>
     */
    inline const Aws::String& GetFileArn() const{ return m_fileArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of a File in Amazon Connect.</p>
     */
    inline bool FileArnHasBeenSet() const { return m_fileArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of a File in Amazon Connect.</p>
     */
    inline void SetFileArn(const Aws::String& value) { m_fileArnHasBeenSet = true; m_fileArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of a File in Amazon Connect.</p>
     */
    inline void SetFileArn(Aws::String&& value) { m_fileArnHasBeenSet = true; m_fileArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a File in Amazon Connect.</p>
     */
    inline void SetFileArn(const char* value) { m_fileArnHasBeenSet = true; m_fileArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a File in Amazon Connect.</p>
     */
    inline FileContent& WithFileArn(const Aws::String& value) { SetFileArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a File in Amazon Connect.</p>
     */
    inline FileContent& WithFileArn(Aws::String&& value) { SetFileArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a File in Amazon Connect.</p>
     */
    inline FileContent& WithFileArn(const char* value) { SetFileArn(value); return *this;}

  private:

    Aws::String m_fileArn;
    bool m_fileArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
