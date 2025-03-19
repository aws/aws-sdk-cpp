/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/b2bi/model/S3Location.h>
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
namespace B2BI
{
namespace Model
{

  /**
   * <p>Container for the location of a sample file used for outbound
   * transformations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/b2bi-2022-06-23/OutputSampleFileSource">AWS
   * API Reference</a></p>
   */
  class OutputSampleFileSource
  {
  public:
    AWS_B2BI_API OutputSampleFileSource() = default;
    AWS_B2BI_API OutputSampleFileSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API OutputSampleFileSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const S3Location& GetFileLocation() const { return m_fileLocation; }
    inline bool FileLocationHasBeenSet() const { return m_fileLocationHasBeenSet; }
    template<typename FileLocationT = S3Location>
    void SetFileLocation(FileLocationT&& value) { m_fileLocationHasBeenSet = true; m_fileLocation = std::forward<FileLocationT>(value); }
    template<typename FileLocationT = S3Location>
    OutputSampleFileSource& WithFileLocation(FileLocationT&& value) { SetFileLocation(std::forward<FileLocationT>(value)); return *this;}
    ///@}
  private:

    S3Location m_fileLocation;
    bool m_fileLocationHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
