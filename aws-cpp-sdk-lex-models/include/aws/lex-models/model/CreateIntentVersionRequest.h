/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/lex-models/LexModelBuildingServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace LexModelBuildingService
{
namespace Model
{

  /**
   */
  class CreateIntentVersionRequest : public LexModelBuildingServiceRequest
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API CreateIntentVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateIntentVersion"; }

    AWS_LEXMODELBUILDINGSERVICE_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the intent that you want to create a new version of. The name is
     * case sensitive. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the intent that you want to create a new version of. The name is
     * case sensitive. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the intent that you want to create a new version of. The name is
     * case sensitive. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the intent that you want to create a new version of. The name is
     * case sensitive. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the intent that you want to create a new version of. The name is
     * case sensitive. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the intent that you want to create a new version of. The name is
     * case sensitive. </p>
     */
    inline CreateIntentVersionRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the intent that you want to create a new version of. The name is
     * case sensitive. </p>
     */
    inline CreateIntentVersionRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the intent that you want to create a new version of. The name is
     * case sensitive. </p>
     */
    inline CreateIntentVersionRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Checksum of the <code>$LATEST</code> version of the intent that should be
     * used to create the new version. If you specify a checksum and the
     * <code>$LATEST</code> version of the intent has a different checksum, Amazon Lex
     * returns a <code>PreconditionFailedException</code> exception and doesn't publish
     * a new version. If you don't specify a checksum, Amazon Lex publishes the
     * <code>$LATEST</code> version.</p>
     */
    inline const Aws::String& GetChecksum() const{ return m_checksum; }

    /**
     * <p>Checksum of the <code>$LATEST</code> version of the intent that should be
     * used to create the new version. If you specify a checksum and the
     * <code>$LATEST</code> version of the intent has a different checksum, Amazon Lex
     * returns a <code>PreconditionFailedException</code> exception and doesn't publish
     * a new version. If you don't specify a checksum, Amazon Lex publishes the
     * <code>$LATEST</code> version.</p>
     */
    inline bool ChecksumHasBeenSet() const { return m_checksumHasBeenSet; }

    /**
     * <p>Checksum of the <code>$LATEST</code> version of the intent that should be
     * used to create the new version. If you specify a checksum and the
     * <code>$LATEST</code> version of the intent has a different checksum, Amazon Lex
     * returns a <code>PreconditionFailedException</code> exception and doesn't publish
     * a new version. If you don't specify a checksum, Amazon Lex publishes the
     * <code>$LATEST</code> version.</p>
     */
    inline void SetChecksum(const Aws::String& value) { m_checksumHasBeenSet = true; m_checksum = value; }

    /**
     * <p>Checksum of the <code>$LATEST</code> version of the intent that should be
     * used to create the new version. If you specify a checksum and the
     * <code>$LATEST</code> version of the intent has a different checksum, Amazon Lex
     * returns a <code>PreconditionFailedException</code> exception and doesn't publish
     * a new version. If you don't specify a checksum, Amazon Lex publishes the
     * <code>$LATEST</code> version.</p>
     */
    inline void SetChecksum(Aws::String&& value) { m_checksumHasBeenSet = true; m_checksum = std::move(value); }

    /**
     * <p>Checksum of the <code>$LATEST</code> version of the intent that should be
     * used to create the new version. If you specify a checksum and the
     * <code>$LATEST</code> version of the intent has a different checksum, Amazon Lex
     * returns a <code>PreconditionFailedException</code> exception and doesn't publish
     * a new version. If you don't specify a checksum, Amazon Lex publishes the
     * <code>$LATEST</code> version.</p>
     */
    inline void SetChecksum(const char* value) { m_checksumHasBeenSet = true; m_checksum.assign(value); }

    /**
     * <p>Checksum of the <code>$LATEST</code> version of the intent that should be
     * used to create the new version. If you specify a checksum and the
     * <code>$LATEST</code> version of the intent has a different checksum, Amazon Lex
     * returns a <code>PreconditionFailedException</code> exception and doesn't publish
     * a new version. If you don't specify a checksum, Amazon Lex publishes the
     * <code>$LATEST</code> version.</p>
     */
    inline CreateIntentVersionRequest& WithChecksum(const Aws::String& value) { SetChecksum(value); return *this;}

    /**
     * <p>Checksum of the <code>$LATEST</code> version of the intent that should be
     * used to create the new version. If you specify a checksum and the
     * <code>$LATEST</code> version of the intent has a different checksum, Amazon Lex
     * returns a <code>PreconditionFailedException</code> exception and doesn't publish
     * a new version. If you don't specify a checksum, Amazon Lex publishes the
     * <code>$LATEST</code> version.</p>
     */
    inline CreateIntentVersionRequest& WithChecksum(Aws::String&& value) { SetChecksum(std::move(value)); return *this;}

    /**
     * <p>Checksum of the <code>$LATEST</code> version of the intent that should be
     * used to create the new version. If you specify a checksum and the
     * <code>$LATEST</code> version of the intent has a different checksum, Amazon Lex
     * returns a <code>PreconditionFailedException</code> exception and doesn't publish
     * a new version. If you don't specify a checksum, Amazon Lex publishes the
     * <code>$LATEST</code> version.</p>
     */
    inline CreateIntentVersionRequest& WithChecksum(const char* value) { SetChecksum(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_checksum;
    bool m_checksumHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
