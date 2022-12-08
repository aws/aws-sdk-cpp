/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/OmicsRequest.h>
#include <aws/omics/model/ReadSetFile.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Omics
{
namespace Model
{

  /**
   */
  class GetReadSetRequest : public OmicsRequest
  {
  public:
    AWS_OMICS_API GetReadSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetReadSet"; }

    AWS_OMICS_API Aws::String SerializePayload() const override;

    AWS_OMICS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The file to retrieve.</p>
     */
    inline const ReadSetFile& GetFile() const{ return m_file; }

    /**
     * <p>The file to retrieve.</p>
     */
    inline bool FileHasBeenSet() const { return m_fileHasBeenSet; }

    /**
     * <p>The file to retrieve.</p>
     */
    inline void SetFile(const ReadSetFile& value) { m_fileHasBeenSet = true; m_file = value; }

    /**
     * <p>The file to retrieve.</p>
     */
    inline void SetFile(ReadSetFile&& value) { m_fileHasBeenSet = true; m_file = std::move(value); }

    /**
     * <p>The file to retrieve.</p>
     */
    inline GetReadSetRequest& WithFile(const ReadSetFile& value) { SetFile(value); return *this;}

    /**
     * <p>The file to retrieve.</p>
     */
    inline GetReadSetRequest& WithFile(ReadSetFile&& value) { SetFile(std::move(value)); return *this;}


    /**
     * <p>The read set's ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The read set's ID.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The read set's ID.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The read set's ID.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The read set's ID.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The read set's ID.</p>
     */
    inline GetReadSetRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The read set's ID.</p>
     */
    inline GetReadSetRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The read set's ID.</p>
     */
    inline GetReadSetRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The part number to retrieve.</p>
     */
    inline int GetPartNumber() const{ return m_partNumber; }

    /**
     * <p>The part number to retrieve.</p>
     */
    inline bool PartNumberHasBeenSet() const { return m_partNumberHasBeenSet; }

    /**
     * <p>The part number to retrieve.</p>
     */
    inline void SetPartNumber(int value) { m_partNumberHasBeenSet = true; m_partNumber = value; }

    /**
     * <p>The part number to retrieve.</p>
     */
    inline GetReadSetRequest& WithPartNumber(int value) { SetPartNumber(value); return *this;}


    /**
     * <p>The read set's sequence store ID.</p>
     */
    inline const Aws::String& GetSequenceStoreId() const{ return m_sequenceStoreId; }

    /**
     * <p>The read set's sequence store ID.</p>
     */
    inline bool SequenceStoreIdHasBeenSet() const { return m_sequenceStoreIdHasBeenSet; }

    /**
     * <p>The read set's sequence store ID.</p>
     */
    inline void SetSequenceStoreId(const Aws::String& value) { m_sequenceStoreIdHasBeenSet = true; m_sequenceStoreId = value; }

    /**
     * <p>The read set's sequence store ID.</p>
     */
    inline void SetSequenceStoreId(Aws::String&& value) { m_sequenceStoreIdHasBeenSet = true; m_sequenceStoreId = std::move(value); }

    /**
     * <p>The read set's sequence store ID.</p>
     */
    inline void SetSequenceStoreId(const char* value) { m_sequenceStoreIdHasBeenSet = true; m_sequenceStoreId.assign(value); }

    /**
     * <p>The read set's sequence store ID.</p>
     */
    inline GetReadSetRequest& WithSequenceStoreId(const Aws::String& value) { SetSequenceStoreId(value); return *this;}

    /**
     * <p>The read set's sequence store ID.</p>
     */
    inline GetReadSetRequest& WithSequenceStoreId(Aws::String&& value) { SetSequenceStoreId(std::move(value)); return *this;}

    /**
     * <p>The read set's sequence store ID.</p>
     */
    inline GetReadSetRequest& WithSequenceStoreId(const char* value) { SetSequenceStoreId(value); return *this;}

  private:

    ReadSetFile m_file;
    bool m_fileHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    int m_partNumber;
    bool m_partNumberHasBeenSet = false;

    Aws::String m_sequenceStoreId;
    bool m_sequenceStoreIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
