/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
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
namespace Omics
{
namespace Model
{

  /**
   * <p>A source for a read set activation job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/StartReadSetActivationJobSourceItem">AWS
   * API Reference</a></p>
   */
  class StartReadSetActivationJobSourceItem
  {
  public:
    AWS_OMICS_API StartReadSetActivationJobSourceItem();
    AWS_OMICS_API StartReadSetActivationJobSourceItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API StartReadSetActivationJobSourceItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The source's read set ID.</p>
     */
    inline const Aws::String& GetReadSetId() const{ return m_readSetId; }

    /**
     * <p>The source's read set ID.</p>
     */
    inline bool ReadSetIdHasBeenSet() const { return m_readSetIdHasBeenSet; }

    /**
     * <p>The source's read set ID.</p>
     */
    inline void SetReadSetId(const Aws::String& value) { m_readSetIdHasBeenSet = true; m_readSetId = value; }

    /**
     * <p>The source's read set ID.</p>
     */
    inline void SetReadSetId(Aws::String&& value) { m_readSetIdHasBeenSet = true; m_readSetId = std::move(value); }

    /**
     * <p>The source's read set ID.</p>
     */
    inline void SetReadSetId(const char* value) { m_readSetIdHasBeenSet = true; m_readSetId.assign(value); }

    /**
     * <p>The source's read set ID.</p>
     */
    inline StartReadSetActivationJobSourceItem& WithReadSetId(const Aws::String& value) { SetReadSetId(value); return *this;}

    /**
     * <p>The source's read set ID.</p>
     */
    inline StartReadSetActivationJobSourceItem& WithReadSetId(Aws::String&& value) { SetReadSetId(std::move(value)); return *this;}

    /**
     * <p>The source's read set ID.</p>
     */
    inline StartReadSetActivationJobSourceItem& WithReadSetId(const char* value) { SetReadSetId(value); return *this;}

  private:

    Aws::String m_readSetId;
    bool m_readSetIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
