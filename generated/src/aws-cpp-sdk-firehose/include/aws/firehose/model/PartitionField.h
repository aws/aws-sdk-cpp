/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
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
namespace Firehose
{
namespace Model
{

  /**
   * <p> </p> <p>Amazon Data Firehose is in preview release and is subject to
   * change.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/PartitionField">AWS
   * API Reference</a></p>
   */
  class PartitionField
  {
  public:
    AWS_FIREHOSE_API PartitionField();
    AWS_FIREHOSE_API PartitionField(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API PartitionField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> </p> <p>Amazon Data Firehose is in preview release and is subject to
     * change.</p>
     */
    inline const Aws::String& GetSourceName() const{ return m_sourceName; }
    inline bool SourceNameHasBeenSet() const { return m_sourceNameHasBeenSet; }
    inline void SetSourceName(const Aws::String& value) { m_sourceNameHasBeenSet = true; m_sourceName = value; }
    inline void SetSourceName(Aws::String&& value) { m_sourceNameHasBeenSet = true; m_sourceName = std::move(value); }
    inline void SetSourceName(const char* value) { m_sourceNameHasBeenSet = true; m_sourceName.assign(value); }
    inline PartitionField& WithSourceName(const Aws::String& value) { SetSourceName(value); return *this;}
    inline PartitionField& WithSourceName(Aws::String&& value) { SetSourceName(std::move(value)); return *this;}
    inline PartitionField& WithSourceName(const char* value) { SetSourceName(value); return *this;}
    ///@}
  private:

    Aws::String m_sourceName;
    bool m_sourceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
