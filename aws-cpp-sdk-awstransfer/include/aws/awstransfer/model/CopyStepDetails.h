/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/awstransfer/model/InputFileLocation.h>
#include <aws/awstransfer/model/OverwriteExisting.h>
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

  /**
   * <p>Each step type has its own <code>StepDetails</code> structure.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/CopyStepDetails">AWS
   * API Reference</a></p>
   */
  class AWS_TRANSFER_API CopyStepDetails
  {
  public:
    CopyStepDetails();
    CopyStepDetails(Aws::Utils::Json::JsonView jsonValue);
    CopyStepDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the step, used as an identifier.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the step, used as an identifier.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the step, used as an identifier.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the step, used as an identifier.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the step, used as an identifier.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the step, used as an identifier.</p>
     */
    inline CopyStepDetails& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the step, used as an identifier.</p>
     */
    inline CopyStepDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the step, used as an identifier.</p>
     */
    inline CopyStepDetails& WithName(const char* value) { SetName(value); return *this;}


    
    inline const InputFileLocation& GetDestinationFileLocation() const{ return m_destinationFileLocation; }

    
    inline bool DestinationFileLocationHasBeenSet() const { return m_destinationFileLocationHasBeenSet; }

    
    inline void SetDestinationFileLocation(const InputFileLocation& value) { m_destinationFileLocationHasBeenSet = true; m_destinationFileLocation = value; }

    
    inline void SetDestinationFileLocation(InputFileLocation&& value) { m_destinationFileLocationHasBeenSet = true; m_destinationFileLocation = std::move(value); }

    
    inline CopyStepDetails& WithDestinationFileLocation(const InputFileLocation& value) { SetDestinationFileLocation(value); return *this;}

    
    inline CopyStepDetails& WithDestinationFileLocation(InputFileLocation&& value) { SetDestinationFileLocation(std::move(value)); return *this;}


    /**
     * <p>A flag that indicates whether or not to overwrite an existing file of the
     * same name. The default is <code>FALSE</code>.</p>
     */
    inline const OverwriteExisting& GetOverwriteExisting() const{ return m_overwriteExisting; }

    /**
     * <p>A flag that indicates whether or not to overwrite an existing file of the
     * same name. The default is <code>FALSE</code>.</p>
     */
    inline bool OverwriteExistingHasBeenSet() const { return m_overwriteExistingHasBeenSet; }

    /**
     * <p>A flag that indicates whether or not to overwrite an existing file of the
     * same name. The default is <code>FALSE</code>.</p>
     */
    inline void SetOverwriteExisting(const OverwriteExisting& value) { m_overwriteExistingHasBeenSet = true; m_overwriteExisting = value; }

    /**
     * <p>A flag that indicates whether or not to overwrite an existing file of the
     * same name. The default is <code>FALSE</code>.</p>
     */
    inline void SetOverwriteExisting(OverwriteExisting&& value) { m_overwriteExistingHasBeenSet = true; m_overwriteExisting = std::move(value); }

    /**
     * <p>A flag that indicates whether or not to overwrite an existing file of the
     * same name. The default is <code>FALSE</code>.</p>
     */
    inline CopyStepDetails& WithOverwriteExisting(const OverwriteExisting& value) { SetOverwriteExisting(value); return *this;}

    /**
     * <p>A flag that indicates whether or not to overwrite an existing file of the
     * same name. The default is <code>FALSE</code>.</p>
     */
    inline CopyStepDetails& WithOverwriteExisting(OverwriteExisting&& value) { SetOverwriteExisting(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    InputFileLocation m_destinationFileLocation;
    bool m_destinationFileLocationHasBeenSet;

    OverwriteExisting m_overwriteExisting;
    bool m_overwriteExistingHasBeenSet;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
