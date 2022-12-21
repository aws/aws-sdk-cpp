/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/awstransfer/model/EncryptionType.h>
#include <aws/awstransfer/model/OverwriteExisting.h>
#include <aws/awstransfer/model/InputFileLocation.h>
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
namespace Transfer
{
namespace Model
{

  class DecryptStepDetails
  {
  public:
    AWS_TRANSFER_API DecryptStepDetails();
    AWS_TRANSFER_API DecryptStepDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API DecryptStepDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    
    inline DecryptStepDetails& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline DecryptStepDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    
    inline DecryptStepDetails& WithName(const char* value) { SetName(value); return *this;}


    
    inline const EncryptionType& GetType() const{ return m_type; }

    
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    
    inline void SetType(const EncryptionType& value) { m_typeHasBeenSet = true; m_type = value; }

    
    inline void SetType(EncryptionType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    
    inline DecryptStepDetails& WithType(const EncryptionType& value) { SetType(value); return *this;}

    
    inline DecryptStepDetails& WithType(EncryptionType&& value) { SetType(std::move(value)); return *this;}


    
    inline const Aws::String& GetSourceFileLocation() const{ return m_sourceFileLocation; }

    
    inline bool SourceFileLocationHasBeenSet() const { return m_sourceFileLocationHasBeenSet; }

    
    inline void SetSourceFileLocation(const Aws::String& value) { m_sourceFileLocationHasBeenSet = true; m_sourceFileLocation = value; }

    
    inline void SetSourceFileLocation(Aws::String&& value) { m_sourceFileLocationHasBeenSet = true; m_sourceFileLocation = std::move(value); }

    
    inline void SetSourceFileLocation(const char* value) { m_sourceFileLocationHasBeenSet = true; m_sourceFileLocation.assign(value); }

    
    inline DecryptStepDetails& WithSourceFileLocation(const Aws::String& value) { SetSourceFileLocation(value); return *this;}

    
    inline DecryptStepDetails& WithSourceFileLocation(Aws::String&& value) { SetSourceFileLocation(std::move(value)); return *this;}

    
    inline DecryptStepDetails& WithSourceFileLocation(const char* value) { SetSourceFileLocation(value); return *this;}


    
    inline const OverwriteExisting& GetOverwriteExisting() const{ return m_overwriteExisting; }

    
    inline bool OverwriteExistingHasBeenSet() const { return m_overwriteExistingHasBeenSet; }

    
    inline void SetOverwriteExisting(const OverwriteExisting& value) { m_overwriteExistingHasBeenSet = true; m_overwriteExisting = value; }

    
    inline void SetOverwriteExisting(OverwriteExisting&& value) { m_overwriteExistingHasBeenSet = true; m_overwriteExisting = std::move(value); }

    
    inline DecryptStepDetails& WithOverwriteExisting(const OverwriteExisting& value) { SetOverwriteExisting(value); return *this;}

    
    inline DecryptStepDetails& WithOverwriteExisting(OverwriteExisting&& value) { SetOverwriteExisting(std::move(value)); return *this;}


    
    inline const InputFileLocation& GetDestinationFileLocation() const{ return m_destinationFileLocation; }

    
    inline bool DestinationFileLocationHasBeenSet() const { return m_destinationFileLocationHasBeenSet; }

    
    inline void SetDestinationFileLocation(const InputFileLocation& value) { m_destinationFileLocationHasBeenSet = true; m_destinationFileLocation = value; }

    
    inline void SetDestinationFileLocation(InputFileLocation&& value) { m_destinationFileLocationHasBeenSet = true; m_destinationFileLocation = std::move(value); }

    
    inline DecryptStepDetails& WithDestinationFileLocation(const InputFileLocation& value) { SetDestinationFileLocation(value); return *this;}

    
    inline DecryptStepDetails& WithDestinationFileLocation(InputFileLocation&& value) { SetDestinationFileLocation(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    EncryptionType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_sourceFileLocation;
    bool m_sourceFileLocationHasBeenSet = false;

    OverwriteExisting m_overwriteExisting;
    bool m_overwriteExistingHasBeenSet = false;

    InputFileLocation m_destinationFileLocation;
    bool m_destinationFileLocationHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
